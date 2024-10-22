#include <iostream>

using namespace std;

int main() {

    int a[] = {15,28,53,47,19,22,63};
    int n = sizeof(a)/sizeof(a[0]);
    int b[n];

    for(int i=0; i<n; i++) {
        b[i]=a[n-1-i];
        cout << b[i] << " ";
    }

    return 0;
}

// Program to copy the contents of one array into another in the reverse order

/*
Code Breakdown
Array Declaration:
int a[] = {15, 28, 53, 47, 19, 22, 63};
An integer array a is declared and initialized with the values {15, 28, 53, 47, 19, 22, 63}.

Calculate Number of Elements:
int n = sizeof(a) / sizeof(a[0]);
This line calculates the number of elements in the array a.
sizeof(a) gives the total number of bytes occupied by the array.
sizeof(a[0]) gives the number of bytes occupied by a single element in the array.
Dividing the total number of bytes by the size of a single element gives the number of elements in the array.

Declare Array b:
int b[n];
An integer array b is declared with the same size as a.

Reverse the Array:
for(int i = 0; i < n; i++) {
    b[i] = a[n - 1 - i];
    cout << b[i] << " ";
}
A for loop iterates from i = 0 to i < n (inclusive), covering all elements of the array.
In each iteration, the element from the end of the array a is assigned to the corresponding position in the array b.
The element b[i] is printed.
*/