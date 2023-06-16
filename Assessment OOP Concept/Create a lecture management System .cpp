#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
    string name;
    string subject;
    string course;
    int num_lectures;

public:
   
    Lecture() {
        name = "";
        subject = "";
        course = "";
        num_lectures = 0;
    }

    void addLecture() {
        cout << "Enter the name of the lecturer: ";
        getline(cin, name);

        cout << "Enter the name of the subject: ";
        getline(cin, subject);

        cout << "Enter the name of the course: ";
        getline(cin, course);

        cout << "Enter the number of lectures: ";
        cin >> num_lectures;
        cin.ignore(); 
    }

    void displayLectureDetails() {
        cout << "Lecturer Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Course: " << course << endl;
        cout << "Number of Lectures: " << num_lectures << endl;
    }
};

int main() {
    const int NUM_LECTURERS = 5;
    Lecture lectures[NUM_LECTURERS];

    for (int i = 0; i < NUM_LECTURERS; i++) {
        cout << "\nEnter details for Lecture " << i + 1 << endl;
        lectures[i].addLecture();
    }

    for (int i = 0; i < NUM_LECTURERS; i++) {
        cout << "\nLecture Details:\n";
        lectures[i].displayLectureDetails();
    }

    return 0;
}

