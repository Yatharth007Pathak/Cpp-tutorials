#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;                                               // returns an integer
}

void printMessage() {
    cout << "Hello, C++!" << endl;
    return;                                                     // does not return any value
}

struct Point {
    int x, y;
};

Point createPoint(int x, int y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;                                                   // returns a struct Point
}

int* createArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i * i;
    }
    return arr;                                                 // returns a pointer to an integer array
}

int& getElement(int arr[], int index) {
    return arr[index];                                          // returns a reference to an array element
}

int main() {

    // Integer return type
    int sum = add(5, 3);
    cout << "Sum: " << sum << endl;

    // Void return type
    printMessage();

    // User-defined return type
    Point p = createPoint(2, 3);
    cout << "Point: (" << p.x << ", " << p.y << ")" << endl;

    // Pointer return type
    int* arr = createArray(5);
    cout << "Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    // Reference return type
    int myArray[5] = {10, 20, 30, 40, 50};
    int& ref = getElement(myArray, 2);
    cout << "Element at index 2: " << ref << endl;

    return 0;
}

// function declarations are not explicitly needed because the function definition itself serves as the declaration.

// Here’s an example demonstrating different return types

/*
The return type of a function indicates what type of value the function will return after execution.
It is specified in the function declaration and definition.
Functions can return primitive types, void, user-defined types, pointers, and references.
Properly specifying and using return types is crucial for ensuring that functions 
behave as expected and that the data they return is handled correctly.
*/