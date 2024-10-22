#include <iostream>

using namespace std;

// Function declaration with a parameter
void greet(string name);

// Function definition with a parameter
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
    return;
}

// Function call with an argument
int main() {

    greet("Alice");  // "Alice" is the argument passed to the parameter "name"
    greet("Bob");    // "Bob" is another argument passed to the same parameter

    return 0;
}

/*
Parameters are variables in the function definition that specify what kind of inputs the function can accept.
Definition Context: Parameters are the variables listed as part of the function's definition.
Purpose: They act as placeholders for the values that will be passed to the function when it is called.
Scope: They are local to the function and are used within the function body to perform tasks or calculations.

Arguments are actual values or expressions passed to the function when it is called, matching the parameters defined.
Arguments are also called actual parameters
Call Context: Arguments are the actual values or expressions you pass to the function when you call it.
Purpose: They provide the actual data that the function uses when it executes.
Correspondence: Each argument corresponds to the function's parameters in order and type.
*/


/*
Types of Parameters
Positional Parameters                Default Parameters                  Reference Parameters
*/