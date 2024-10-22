#include <iostream>

using namespace std;

int power(int a, int b) {
    if(b==0) return 1;
    return a * power(a, b-1);
}

int main() {

    int a;
    cout << "enter base : ";
    cin >> a;

    int b;
    cout << "enter power : ";
    cin >> b;

    cout << power(a,b);

    return 0;
}

// function which calculates 'a' raised to the power 'b' using recursion

/*
breakdown of the code:

Function power(int a, int b)
Definition and Base Case
int power(int a, int b) {
    if(b == 0) return 1;
If the exponent b is 0, the function returns 1 because any number raised to the power of 0 is 1.
    return a * power(a, b - 1);
}
If b is not 0, the function returns the value of a multiplied by the result of power(a, b - 1). 
This is the recursive step where the function calls itself with the exponent decremented by 1.


Function main()
Input Handling and Function Call
int main() {
    int a;
    cout << "enter base : ";
    cin >> a;
The program prompts the user to enter a value for the base a and reads the input using cin.
    int b;
    cout << "enter power : ";
    cin >> b;
The program prompts the user to enter a value for the exponent b and reads the input using cin.
    cout << power(a, b);
    return 0;
}
The program calls the power function with the user-provided values of a and b, and prints the result using cout.


Example Execution
If the user enters 2 for the base and 3 for the exponent, the function power(2, 3) will be evaluated as follows:

power(2, 3) returns 2 * power(2, 2)
power(2, 2) returns 2 * power(2, 1)
power(2, 1) returns 2 * power(2, 0)
power(2, 0) returns 1 (base case)
Substituting back:

power(2, 1) becomes 2 * 1 = 2
power(2, 2) becomes 2 * 2 = 4
power(2, 3) becomes 2 * 4 = 8
The program will output 8.
*/