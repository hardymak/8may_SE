//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int* elements;

public:
    Matrix(int n) {
        size = n;
        elements = new int[size];
    }

    ~Matrix() {
        delete[] elements;
    }

    void readMatrix() {
        cout << "Enter the elements of the matrix: ";
        for (int i = 0; i < size; i++) {
            cin >> elements[i];
        }
    }

    void displayMatrix() {
        cout << "Matrix elements: ";
        for (int i = 0; i < size; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.elements[i] = elements[i] + other.elements[i];
        }
        return result;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Matrix 1:" << endl;
    matrix1.readMatrix();

    cout << "Matrix 2:" << endl;
    matrix2.readMatrix();

    Matrix sum = matrix1 + matrix2;

    cout << "Sum of the matrices:" << endl;
    sum.displayMatrix();

    return 0;
}

