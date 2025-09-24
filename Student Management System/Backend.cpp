#include <iostream>
#include "Student.h"
extern class StudentManagementSystem;

int main(){
    StudentManagementSystem sms;
    int choice;

    do{
        // Display menu
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n2. View Students\n3. Search Student\n4. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            int id; string name, course; float gpa;
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Course: "; cin >> course;
            cout << "Enter GPA: "; cin >> gpa;
            sms.addStudent(id,name,course,gpa);
        }
        else if(choice==2){
            sms.viewStudents();
        }
        else if(choice==3){
            int id; cout << "Enter Student ID: "; cin >> id;
            sms.searchStudent(id);
        }
    } while(choice!=4);

    return 0;
}
