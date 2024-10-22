#include <iostream>

using namespace std;

int main() {

    // Create and initialize the array of integers
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Prompt the user to input the number x
    int x;
    cout << "Enter the number x: ";
    cin >> x;

    // Initialize a counter for elements greater than x
    int count = 0;

    // Iterate over the array elements and count elements greater than x
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x) {
            count++;
        }
    }

    // Print the count of elements greater than x
    cout << "Number of elements greater than " << x << ": " << count << endl;

    return 0;
}

// Count the number of elements in given array greater than given number x

/*
Code Explanation:
Array Initialization:

We create and initialize an array named arr with integer values.
Array Size Determination:

We calculate the size of the array using sizeof(arr) / sizeof(arr[0]). This gives the number of elements in the array.
Input the Number x:

We prompt the user to input the number x using cin.
Counting Elements Greater Than x:

We initialize a counter variable count to count the number of elements greater than x.
We iterate over each element of the array using a for loop.
For each element that is greater than x, we increment the count variable.
Printing the Count:

After counting the elements greater than x, we print the count using cout.
*/