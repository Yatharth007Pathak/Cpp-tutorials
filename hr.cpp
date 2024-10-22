#include <iostream>

using namespace std;

int main() {

    // Declaration and initialization of an array
    int x[5] = {1, 2, 3, 4, 5};

    // calculating size of array x
    cout << sizeof(x) << endl;

    // printing the elements of array
    cout << x[0] << " ";
    cout << x[1] << " ";
    cout << x[2] << " ";
    cout << x[3] << " ";
    cout << x[4] << " ";

    // Accessing elements
    int first_element = x[0]; 
    int second_element = x[1];

    // Modifying elements
    x[2] = 10;

    cout << endl << "Modified third element: " << x[2];

    return 0;
}

/*
An array is a data structure that can store a collection of elements, typically of the same data type, in a contiguous block of memory. 
Arrays are used to organize data so that a related set of values can be easily accessed and manipulated.
Arrays provide a way to handle multiple data items of the same type efficiently by storing them in contiguous memory locations.

indexing of an array of size n  begins with 0 and ends with n-1
the expression arr[n] designates the (n+1)th element in array
the expression arr[0] designates the first element in array

Memory allocation in array is continuous

Types of Arrays:
One-Dimensional Arrays: Also known as linear arrays. They store elements in a single line.
Multi-Dimensional Arrays: Arrays that store elements in a grid-like structure (e.g., two-dimensional arrays for matrices).

Operations on Arrays:
Traversal: Accessing each element of the array.
Insertion: Adding an element at a specific index (though in fixed-size arrays, this typically involves shifting elements).
Deletion: Removing an element from a specific index (also involves shifting elements).
Search: Finding the index of an element based on its value.
Update: Changing the value of an element at a specific index.
*/