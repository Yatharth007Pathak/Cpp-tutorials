#include <iostream>

using namespace std;

int main() {

    int a;
    cout << "enter a : ";
    cin >> a; 
    char op;
    cout << "enter the operator : ";
    cin >> op;
    cout << "enter b : ";
    int b;
    cin >> b;

    switch (op) {
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a/b << endl;
            break;
        default:
            cout << "invalid operator" << endl;
            break;
    }
    
    return 0;
}

/*
program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case
the calculator should input two numbers and an operator from user
*/

/*
In C++, a switch statement is a control flow statement used to select one of many code blocks to be executed
based on the value of a variable or an expression. It's particularly useful when we have a variable 
or expression with multiple possible values and you want to execute different blocks of code based on these values.

The basic syntax of a switch statement in C++ is:

switch (expression) {
    case value1:
        // code to be executed if expression equals value1
        break;
    case value2:
        // code to be executed if expression equals value2
        break;
    // additional cases as needed
    default:
        // code to be executed if expression doesn't match any case
        break;
}

Here's how it works:

The switch keyword starts the switch statement, followed by an expression (such as a variable or a value).
The expression is evaluated, and the control flow jumps to the case whose value matches the value of the expression.
If a case matches, the code block associated with that case is executed. 
The break statement is then used to exit the switch statement and continue execution after the switch block.
If no case matches, the code block associated with the default case (if it's provided) is executed.
If no default case is provided and no case matches, no code inside the switch statement is executed, 
and the control flow continues after the switch block.
*/