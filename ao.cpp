#include <iostream>

using namespace std;

int main() {
    int x;
    x = 7;
    cout << x << endl;
    x = 8;
    cout << x << endl;
    x = x + 6;                               // x += 6
    cout << x << endl;
    x = x - 4;                               // x -= 4
    cout << x << endl;
    x = x * 2;                               // x *= 2
    cout << x << endl;
    
    return 0;
}

// Updation of variables

/*
Include Directive: #include <iostream> - This line includes the input-output stream library, 
allowing us to perform input and output operations in our program.

Namespace Declaration: using namespace std; - This line declares that we are using the std namespace, 
which contains functions and objects for standard C++ programming. 
This allows us to use names from the std namespace (such as cout and endl) without needing to prefix them with std::.

Main Function: int main() - This is the starting point of execution for the program. The program execution begins from here. 
It returns an integer value to indicate the status of the program to the operating system.

Variable Declaration and Initialization:
int x; - This line declares an integer variable named x without initializing it.
x = 7; - This line assigns the value 7 to the variable x.

Output Operations:
cout << x << endl; - This line outputs the current value of x (which is 7) to the standard output (usually the console) followed by a newline.
x = 8; - This line assigns the value 8 to the variable x.
cout << x << endl; - This line outputs the current value of x (which is now 8) to the console.
x = x + 6; - This line adds 6 to the current value of x (8), then assigns the result (14) back to x. 
This operation can be written more concisely as x += 6;.
cout << x << endl; - This line outputs the updated value of x (which is now 14) to the console.
x = x - 4; - This line subtracts 4 from the current value of x (14), then assigns the result (10) back to x. 
This operation can be written more concisely as x -= 4;.
cout << x << endl; - This line outputs the updated value of x (which is now 10) to the console.
x = x * 2; - This line multiplies the current value of x (10) by 2, then assigns the result (20) back to x. 
This operation can be written more concisely as x *= 2;.
cout << x << endl; - This line outputs the updated value of x (which is now 20) to the console.

Return Statement: return 0; - This line returns 0 to indicate successful termination of the program to the operating system. 
In C++, returning 0 from the main() function signifies that the program executed without any errors.
*/