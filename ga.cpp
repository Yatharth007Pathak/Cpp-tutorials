#include <iostream>

using namespace std;

void greet();                                           // Function declaration

int main() {
    
    greet();                                            // Function call
    cout << "hey" << endl;
    greet();                                            // Function call

    return 0;
}

void greet() {                                          // Function definition
    cout << "good morning" << endl;
    cout << "how are you?" << endl;
    return;
} 

// In C++, functions are blocks of code that perform a specific task. Functions allow for code reusability, modularity, and better organization.

/*
a function may be called more than once from any other function
the same variable names can be used in different functinons without any conflict
every called function must contain a return statement except void type
a function may contain more than one return statements
*/


/*
In C++, the return statement is used to exit a function and optionally return a value to the function's caller. 
The behavior of the return statement depends on the return type of the function.

In C++, the return type of a function specifies the type of value that the function will return to the caller when it completes its execution. 
The return type is declared in the function prototype and definition.
*/

/*
In coding, a function typically has three main parts:

Function Declaration (or Prototype):
This part defines the function's name, return type, and parameters (if any) but does not provide the body of the function. 
It acts as a promise to the compiler that the function will be defined later.
Note: In many modern programming languages like Python, function declarations are not explicitly needed because the function definition 
itself serves as the declaration.

Function Definition:
This part provides the actual implementation of the function. It includes the same information as the declaration 
(return type, function name, and parameters) but also includes the body of the function where the code that performs the task is written.
It contains the actual code that will run when the function is called.

Function Call:
This part involves invoking the function to execute the code contained within it. When a function is called, 
control is transferred to the function, the code within the function is executed, 
and then control is returned to the point where the function was called.
It executes the function with specified arguments and assigns the return value to return type.
*/

/*
Function Parameters are variables listed as part of a function's definition. 
They allow us to pass information into the function so it can perform tasks using that information. 
Parameters provide a way to send data or inputs to functions, making them more versatile and reusable.
Parameters are declared in the function's definition, within the parentheses following the function name.
Each parameter has a type and a name.
Inside the function, parameters act like regular variables.
They can be used to perform operations or computations within the function.
When calling a function, we  provide arguments, which are the actual values or expressions passed to the function's parameters.

Parameters can be passed to functions in several ways:

Pass by Value:
The function gets a copy of the argument. Changes to the parameter inside the function do not affect the original argument.

Pass by Reference:
The function gets a reference to the argument. Changes to the parameter inside the function do affect the original argument.

Pass by Pointer:
The function gets a pointer to the argument. Changes to the parameter through the pointer affect the original argument.
*/


/*
The return type of a function indicates what type of value the function will return after execution.
Common Return Types :-

Primitive Types: Functions can return primitive data types such as int, char, float, double, etc.
int type returns an integer
char type returns a character
double type returns a double

Void Type: A function with a void return type does not return any value.

User-Defined Types: Functions can return user-defined types such as classes, structs, or enums.

Pointer Types: Functions can return pointers to any type.
int* type returns a pointer to an integer

Reference Types: Functions can return references to any type.
int& type returns a reference to an integer
*/