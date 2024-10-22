#include <iostream>

using namespace std;

int main() {

    int a[] = {15,28,53,47,19,22,63};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "given array :- ";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }

    int i = 0;
    int j = n-1;
    while(i<j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    cout << endl << "array after reversing :- ";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

// program to reverse the array without using any extra array

/*
Code Breakdown

Array Declaration and Size Calculation
int a[] = {15, 28, 53, 47, 19, 22, 63};
int n = sizeof(a) / sizeof(a[0]);
An integer array a is declared and initialized with the values {15, 28, 53, 47, 19, 22, 63}.
The size of the array n is calculated by dividing the total number of bytes occupied by the array (sizeof(a)) 
by the number of bytes occupied by a single element (sizeof(a[0])). This gives the number of elements in the array.

Printing the Given Array
cout << "given array :- ";
for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
A for loop iterates from i = 0 to i < n (inclusive), covering all elements of the array.
In each iteration, the loop prints the i-th element of the array followed by a space.

Reversing the Array
int i = 0;
int j = n - 1;
while(i < j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
}
Two indices i and j are initialized. i starts at the beginning of the array (0) and j starts at the end of the array (n - 1).
A while loop runs as long as i is less than j.
Inside the loop, the elements at indices i and j are swapped using a temporary variable temp.
After swapping, i is incremented and j is decremented, moving towards the center of the array.
This process continues until all elements are swapped, effectively reversing the array.

Printing the Reversed Array
cout << endl << "array after reversing :- ";
for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
A for loop iterates from i = 0 to i < n (inclusive), covering all elements of the array.
In each iteration, the loop prints the i-th element of the array followed by a space.
*/