#include <iostream>

using namespace std;

int main() {

    int arr[] = {15,28,53,47,19,22,63,54,97};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=n-1; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int mx = arr[0];
    for(int i=0; i<=n-1; i++) {
        if(arr[i]>mx) {
            mx = arr[i];
        }
    }
    cout << mx;

    return 0;
}

// inside for loop we can also use mx = max(mx,arr[i]);

// find the maximum value out of all the elements in the array

/*
Code Breakdown

Array Declaration and Size Calculation
int arr[] = {15, 28, 53, 47, 19, 22, 63, 54, 97};
An integer array arr is declared and initialized with the values {15, 28, 53, 47, 19, 22, 63, 54, 97}.
int n = sizeof(arr) / sizeof(arr[0]);
This line calculates the number of elements in the array arr.
sizeof(arr) gives the total number of bytes occupied by the array.
sizeof(arr[0]) gives the number of bytes occupied by a single element in the array.
Dividing the total number of bytes by the size of a single element gives the number of elements in the array.

Printing Array Elements
for(int i = 0; i <= n - 1; i++) {
    cout << arr[i] << " ";
}
cout << endl;
A for loop iterates from i = 0 to i = n - 1 (inclusive), covering all elements of the array.
In each iteration, the loop prints the i-th element of the array followed by a space.
After the loop, cout << endl; prints a newline character for better readability of the output.

Finding the Maximum Element
int mx = arr[0];
An integer variable mx is declared and initialized to the first element of the array.
for(int i = 0; i <= n - 1; i++) {
    if(arr[i] > mx) {
        mx = arr[i];
    }
}
Another for loop iterates from i = 0 to i = n - 1 (inclusive).
In each iteration, the loop checks if the i-th element of the array is greater than mx.
If the condition is true, mx is updated to the value of the i-th element.
This effectively finds the maximum value in the array.

cout << mx;
After the loop, the value of mx (which is the maximum element in the array) is printed.

return 0;
}
This line indicates that the main function returns an integer value of 0, signaling that the program has executed successfully.
*/