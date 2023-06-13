#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;
public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
};

class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;
public:
    void setMarks(int marks1, int marks2) {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
};

class Result : public Test {
    int totalMarks;
public:
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;
    studentResult.setRollNumber(1);
    studentResult.setMarks(85, 92);
    studentResult.calculateTotalMarks();
    studentResult.displayResult();

    return 0;
}

