#include <iostream>
#include <vector>
#include "Employee.h"
using namespace std;

// Employee Management backend
class EmployeeManagement {
private:
    vector<Employee> employees; // Stores employees

public:
    // Add an employee
    void addEmployee(int id, string name, string position){
        employees.push_back({id, name, position});
        cout << "Employee added successfully.\n";
    }

    // View all employees
    void viewEmployees(){
        if(employees.empty()){ cout << "No employees found.\n"; return; }
        cout << "\n--- Employees ---\n";
        for(auto &e:employees)
            cout << "ID: " << e.id << ", Name: " << e.name << ", Position: " << e.position << "\n";
    }
};
