#include <iostream>

using namespace std;

int main() {

    // Create and initialize the array of integers
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize variables to store the sum of even-indexed and odd-indexed elements
    int sum_even = 0, sum_odd = 0;

    // Iterate over the array elements
    for (int i = 0; i < n; ++i) {
        // Check if the index is even or odd
        if (i % 2 == 0) {
            // Even-indexed element
            sum_even += arr[i];
        } else {
            // Odd-indexed element
            sum_odd += arr[i];
        }
    }

    // Calculate the difference between the sums of even and odd indexed elements
    int difference = sum_even - sum_odd;

    cout << "sum of even numbered elements is " << sum_even << endl;
    cout << "sum of odd numbered elements is " << sum_odd << endl;

    cout << "difference between the sum of elements at even indices to the sum of elements at odd indices is " << difference;

    return 0;
}


// Find the difference between the sum of elements at even indices to the sum of elements at odd indices