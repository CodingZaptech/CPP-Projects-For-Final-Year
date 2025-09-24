#include <iostream>
#include "Employee.h"
extern class EmployeeManagement;

int main(){
    EmployeeManagement em;
    int choice, id;
    string name, position;

    do{
        cout << "\n--- Employee Management ---\n";
        cout << "1. Add Employee\n2. View Employees\n3. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Employee ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Position: "; cin >> position;
            em.addEmployee(id,name,position);
        }
        else if(choice==2){
            em.viewEmployees();
        }
    } while(choice!=3);

    return 0;
}
