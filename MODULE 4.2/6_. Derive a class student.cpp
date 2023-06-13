#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initialize(string n, int a) {
        name = n;
        age = a;
    }

    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void writeData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void readData() {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void writeData() {
        Person::writeData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    void readData() {
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void writeData() {
        Person::writeData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "*** Student Data ***" << endl;
    student.readData();

    cout << endl << "*** Teacher Data ***" << endl;
    teacher.readData();

    cout << endl << "*** Student Details ***" << endl;
    student.writeData();

    cout << endl << "*** Teacher Details ***" << endl;
    teacher.writeData();

    return 0;
}

