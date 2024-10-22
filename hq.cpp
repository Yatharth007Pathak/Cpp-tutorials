#include <iostream>

using namespace std;

int fibo(int n) {
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    cout << fibo(n);

    return 0;
}

// function to calculate the nth fibonacci number using recursion

// fibonacci series:- 1,1,2,3,5,8,13,21,34,55,89


/*
breakdown of the code:

Function fibo(int n)
Definition and Base Case and recursive case
int fibo(int n) {
    if(n == 1 || n == 2) return 1;
Base Case: The function includes a base case to stop the recursion. 
If n is 1 or 2, the function returns 1 because the first two numbers in the Fibonacci sequence are 1.
    return fibo(n - 1) + fibo(n - 2);
}
Recursive Case: If n is not 1 or 2, the function returns the sum of fibo(n - 1) and fibo(n - 2). 
This is the recursive step where the function calls itself to calculate the two preceding Fibonacci numbers.

Function main()
Input Handling and Function Call
int main() {
    int n;
    cout << "enter n : ";
    cin >> n;
Input Handling: The program prompts the user to enter a value for n and reads the input using cin.
cout << fibo(n);
    return 0;
}
Function Call and Output: The program calls the fibo function with the user-provided value of n and prints the result using cout
*/