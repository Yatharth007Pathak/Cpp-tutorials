#include <iostream>

using namespace std;

int fact(int n) {                                                // function definition
    if(n==0 || n==1) return 1;                                   // Base case: if n is 1, return 1
    return n * fact(n-1);                                        // Recursive case: n * product of all numbers up to n-1
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    cout << fact(n);                                             // Call the facty function with user input and print the result

    return 0;
}

// function which calculates the factorial of n using recursion