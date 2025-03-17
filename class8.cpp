#include <iostream>
using namespace std;

class Employee {
    int age;
    char name[50];
    float salary;

public:
    void get();
    void display();
};

void Employee::get() {
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter name: ";
    cin.getline(name, 50); // Use cin.getline instead of gets
}

void Employee::display() {
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "Name: " << name << endl;
}

int main() {
    Employee e1; // Remove the keyword 'class'
    cout << "Enter e1 details: " << endl;
    e1.get();
    cout << "e1 details: " << endl;
    e1.display(); // Add parentheses to call the function
    return 0;
}

