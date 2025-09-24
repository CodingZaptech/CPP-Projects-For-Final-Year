#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

// Class simulating backend of Student Management System
class StudentManagementSystem {
private:
    vector<Student> students; // Stores all students

public:
    // Add a new student
    void addStudent(int id,string name,string course,float gpa){
        students.push_back({id,name,course,gpa});
        cout << "Student added successfully!\n";
    }

    // View all students
    void viewStudents(){
        if(students.empty()){ 
            cout << "No student records found.\n"; 
            return; 
        }
        cout << "\n--- Student Records ---\n";
        for(auto &s:students)
            cout << "ID:" << s.id << ", Name:" << s.name 
                 << ", Course:" << s.course << ", GPA:" << s.gpa << "\n";
    }

    // Search student by ID
    void searchStudent(int id){
        for(auto &s:students)
            if(s.id==id){
                cout << "Found Student → " << s.name << " (" << s.course << ") GPA: " << s.gpa << "\n";
                return;
            }
        cout << "Student with ID " << id << " not found.\n";
    }
};
