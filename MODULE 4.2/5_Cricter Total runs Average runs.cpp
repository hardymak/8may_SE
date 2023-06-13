#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;
public:
    void inputData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;
public:
    void inputBatsmanData() {
        inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        averageRuns = static_cast<float>(totalRuns) / bestPerformance;
    }

    void displayData() {
        cout << "\nPlayer Details:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputBatsmanData();
    batsman.calculateAverageRuns();
    batsman.displayData();
    return 0;
}


