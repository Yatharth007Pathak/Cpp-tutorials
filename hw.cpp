#include <iostream>

using namespace std;

int main() {

    int arr[6] = {5,8,3,7,9,2};

    for(int i=0; i<=5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int sum = 0;
    for(int i=0; i<=5; i++) {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}

// calculate the sum of all the elements in the given array

/*
Code Breakdown
#include <iostream>
using namespace std;
These lines include the iostream library for input and output operations and bring all the names in the std namespace into the global namespace.

Main Function
int main() {
This is the entry point of the program where execution begins.

Array Declaration and Initialization
int arr[6] = {5, 8, 3, 7, 9, 2};
An integer array arr of size 6 is declared and initialized with the values {5, 8, 3, 7, 9, 2}.

Printing Array Elements
for(int i = 0; i <= 5; i++) {
    cout << arr[i] << " ";
}
cout << endl;
A for loop iterates from i = 0 to i = 5 (inclusive), covering all elements of the array.
In each iteration, the loop prints the i-th element of the array followed by a space.
After the loop, cout << endl; prints a newline character for better readability of the output.

Summing Array Elements
int sum = 0;
for(int i = 0; i <= 5; i++) {
    sum += arr[i];
}
cout << sum;
An integer variable sum is declared and initialized to 0.
Another for loop iterates from i = 0 to i = 5 (inclusive).
In each iteration, the loop adds the i-th element of the array to sum.
After the loop, the value of sum (which is the sum of all elements in the array) is printed.

return 0;
}
This line indicates that the main function returns an integer value of 0, signaling that the program has executed successfully.
*/