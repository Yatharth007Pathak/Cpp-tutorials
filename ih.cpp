#include <iostream>

using namespace std;

bool isPalindrome(int arr[], int n) {
    for (int i=0; i<n/2; i++) {
        if (arr[i] != arr[n-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (isPalindrome(arr, n)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
    return 0;
}

// If an array arr contains n elements, then check if the given array is palindrome or not

/*
In this code:
The isPalindrome function iterates through the array from the beginning and end simultaneously. It compares corresponding elements.
If at any point, the elements are not equal, the function returns false, indicating that the array is not a palindrome.
If the loop completes without finding any unequal pair of elements, the function returns true, indicating that the array is a palindrome.
In the main function, an example array arr is declared, and its size is calculated using sizeof. 
Then, isPalindrome function is called with the array and its size, and the result is printed accordingly.
*/