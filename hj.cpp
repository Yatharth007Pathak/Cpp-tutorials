#include <iostream>

using namespace std;

void greet(int n);                           // Function declaration

int main() {
    greet(3);                                // Function call
    return 0;
}

void greet(int n) {                          // Function definition with parameter
    if (n == 0) return;                      // Base case: if n is 0, stop recursion
    cout << "namaste" << endl;
    greet(n - 1);                            // Recursive call with n-1
    return;  
}


// Recursion in C++ is a powerful programming technique where a function calls itself to solve a problem.

/*
Here's a basic overview of how recursion works:
Base Case: The is the condition under which the recursive function stops calling itself and ends.
Without a base case, the function would call itself indefinitely, leading to a stack overflow.
Recursive Case: This is the part of the function where the function calls itself with a modified argument, 
gradually moving towards the base case.
*/


/*
Code Breakdown:
Function Declaration:

void greet(int n);
This line declares the function greet which takes an integer parameter n and returns void.

Main Function:
int main() {
    greet(3);
    return 0;
}
In the main function, greet is called with the argument 3. This means the function greet will be invoked with n set to 3.

Function Definition:
void greet(int n) {
    if (n == 0) return;
    cout << "namaste" << endl;
    greet(n - 1);
    return;  
}
Base Case: if (n == 0) return; This is the base case for the recursion. When n is 0, the function returns immediately, stopping the recursion.
Print Statement: cout << "namaste" << endl; This line prints "namaste" to the console.
Recursive Call: greet(n - 1); This line calls the greet function recursively with n decremented by 1.
Return Statement: return; This is redundant here as the function reaches its end anyway, 
but it can be used to explicitly indicate the end of the function execution.

Execution Flow:
First Call: greet(3)
n is 3, which is not 0.
Prints "namaste".
Calls greet(2).

Second Call: greet(2)
n is 2, which is not 0.
Prints "namaste".
Calls greet(1).

Third Call: greet(1)
n is 1, which is not 0.
Prints "namaste".
Calls greet(0).

Fourth Call: greet(0)
n is 0.
The function returns immediately due to the base case.

Each call to greet prints "namaste" until n reaches 0, resulting in "namaste" being printed three times.
*/