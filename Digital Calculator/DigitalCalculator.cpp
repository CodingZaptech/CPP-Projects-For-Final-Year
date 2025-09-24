#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QString>
#include <QDebug>

class DigitalCalculatorGUI : public QWidget {
    Q_OBJECT

public:
    DigitalCalculatorGUI(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("Digital Calculator");

        display = new QLineEdit();
        display->setReadOnly(true);
        display->setAlignment(Qt::AlignRight);
        display->setFixedHeight(40);

        // Create buttons
        QString buttons[4][4] = {
            {"7","8","9","/"},
            {"4","5","6","*"},
            {"1","2","3","-"},
            {"0",".","=","+"}
        };

        QGridLayout *grid = new QGridLayout();
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                QPushButton *btn = new QPushButton(buttons[i][j]);
                btn->setFixedSize(60,60);
                grid->addWidget(btn,i,j);
                connect(btn,&QPushButton::clicked,this,[=](){ onButtonClicked(buttons[i][j]); });
            }
        }

        // Clear button
        QPushButton *clearBtn = new QPushButton("C");
        clearBtn->setFixedHeight(40);
        connect(clearBtn, &QPushButton::clicked, this, &DigitalCalculatorGUI::clearDisplay);

        QVBoxLayout *mainLayout = new QVBoxLayout();
        mainLayout->addWidget(display);
        mainLayout->addLayout(grid);
        mainLayout->addWidget(clearBtn);

        setLayout(mainLayout);
    }

private slots:
    void onButtonClicked(QString text){
        if(text=="="){
            calculateResult();
        } else {
            currentInput += text;
            display->setText(currentInput);
        }
    }

    void clearDisplay(){
        currentInput = "";
        display->setText("");
        operand1 = operand2 = 0;
        operation = "";
    }

private:
    QLineEdit *display;
    QString currentInput;
    double operand1=0, operand2=0;
    QString operation="";

    void calculateResult(){
        QString temp = currentInput;
        QChar opChar;
        int opIndex = -1;

        // Find operator (+,-,*,/,^,%)
        for(int i=0;i<temp.length();i++){
            if(temp[i]=='+' || temp[i]=='-' || temp[i]=='*' || temp[i]=='/' || temp[i]=='^' || temp[i]=='%'){
                opChar = temp[i];
                opIndex = i;
                break;
            }
        }

        if(opIndex==-1){
            display->setText("Invalid input!");
            return;
        }

        operand1 = temp.left(opIndex).toDouble();
        operand2 = temp.mid(opIndex+1).toDouble();
        double result = 0;

        if(opChar=='+') result = operand1 + operand2;
        else if(opChar=='-') result = operand1 - operand2;
        else if(opChar=='*') result = operand1 * operand2;
        else if(opChar=='/'){
            if(operand2==0){ display->setText("Error: Division by zero!"); return; }
            result = operand1 / operand2;
        }
        else if(opChar=='^') result = pow(operand1, operand2);
        else if(opChar=='%') result = fmod(operand1, operand2);

        display->setText(QString::number(result));
        currentInput = QString::number(result);
    }
};

#include "main.moc"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    DigitalCalculatorGUI calculator;
    calculator.show();
    return app.exec();
}
