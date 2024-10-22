#include <iostream>

using namespace std;

int main() {

    // Create and initialize the array of integers
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    // Determine the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Modify the array elements according to the requirements
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // Even-indexed element: Increment by 10
            arr[i] += 10;
        } else {
            // Odd-indexed element: Multiply by 2
            arr[i] *= 2;
        }
    }

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10

/*
Code Explanation:
Array Initialization:

We create and initialize an array named arr with integer values.
Array Size Determination:

We calculate the size of the array using sizeof(arr) / sizeof(arr[0]). This gives the number of elements in the array.
Array Modification:

We iterate over each element of the array using a for loop.
For each element at an even index (index starting from 0), we increment its value by 10.
For each element at an odd index, we multiply its value by 2.
Printing the Modified Array:

After modifying the array, we print the modified array elements using another for loop.
*/