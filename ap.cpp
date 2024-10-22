#include <iostream>

using namespace std;

int main() {
    int x = 10, y = 3;
    cout << x+y << endl;
    cout << x-y << endl;
    cout << x*y << endl;
    cout << x/y << endl;
    cout << x%y << endl;
        
    return 0;
}

// Arithmetic operators


/*
break down of C++ code step by step:

Include Directive: #include <iostream> - This line includes the input-output stream library, 
allowing us to perform input and output operations in our program.

Namespace Declaration: using namespace std; - This line declares that we are using the std namespace, 
which contains functions and objects for standard C++ programming. 
This allows us to use names from the std namespace (such as cout and endl) without needing to prefix them with std::.

Main Function: int main() - This is the starting point of execution for the program. The program execution begins from here. 
It returns an integer value to indicate the status of the program to the operating system.

Variable Declaration: int x = 10, y = 3; - This line declares two integer variables x and y 
and initializes them with the values 10 and 3, respectively.

Output Operations:
cout << x+y << endl; Output the sum of x and y followed by a newline character.
cout << x-y << endl; Output the difference of x and y followed by a newline character.
cout << x*y << endl; Output the product of x and y followed by a newline character.
cout << x/y << endl; Output the result of integer division of x by y followed by a newline character.
cout << x%y << endl; Output the remainder of x divided by y (modulo operation) followed by a newline character.

Return Statement: return 0; - This line returns 0 to indicate successful termination of the program to the operating system. 
In C++, returning 0 from the main() function signifies that the program executed without any errors.
*/