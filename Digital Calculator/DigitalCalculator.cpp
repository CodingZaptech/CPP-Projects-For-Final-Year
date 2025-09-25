#include "Calculator.h"
#include "CalculatorBackend.cpp"

Calculator::Calculator() {
    set_title("Digital Calculator");
    set_default_size(300, 400);

    vbox.set_orientation(Gtk::ORIENTATION_VERTICAL);
    add(vbox);

    // Display
    display.set_editable(false);
    display.set_alignment(Gtk::ALIGN_END);
    display.set_text("");
    vbox.pack_start(display, Gtk::PACK_SHRINK);

    // Buttons layout
    const std::string buttons[4][4] = {
        {"7", "8", "9", "/"},
        {"4", "5", "6", "*"},
        {"1", "2", "3", "-"},
        {"0", ".", "=", "+"}
    };

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            auto btn = Gtk::make_managed<Gtk::Button>(buttons[i][j]);
            btn->signal_clicked().connect(sigc::bind<std::string>(
                sigc::mem_fun(*this, &Calculator::on_button_clicked), buttons[i][j]));
            grid.attach(*btn, j, i, 1, 1);
        }
    }

    vbox.pack_start(grid);
    show_all_children();
}

Calculator::~Calculator() {}

void Calculator::on_button_clicked(std::string value) {
    if(value == "=") {
        double result = evaluateExpression(expression);
        display.set_text(std::to_string(result));
        expression = std::to_string(result);
    } else {
        expression += value;
        display.set_text(expression);
    }
}

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.calculator");
    Calculator calc;
    return app->run(calc);
}
