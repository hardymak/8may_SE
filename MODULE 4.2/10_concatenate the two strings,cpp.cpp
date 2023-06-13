//Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;

public:
    MyString(const char* str = "") {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Copy constructor
    MyString(const MyString& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Destructor
    ~MyString() {
        delete[] data;
    }

    // Overloaded concatenation operator
    MyString operator+(const MyString& other) {
        int len1 = strlen(data);
        int len2 = strlen(other.data);
        char* temp = new char[len1 + len2 + 1];
        strcpy(temp, data);
        strcat(temp, other.data);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    // Overloaded assignment operator
    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    // Display string
    void display() {
        std::cout << data << std::endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2(" World!");

    MyString result = str1 + str2;

    result.display();

    return 0;
}

