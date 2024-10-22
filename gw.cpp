#include <iostream>

using namespace std;

int main() {

    int i;
    for(i=1; i<=5; i++) {
        cout << i << endl;
    }
    cout << i << endl;

    return 0;
}

/*
The scope of a variable refers to the region of the code where the variable is defined and can be accessed. 
Understanding the scope of variables is crucial for managing the visibility and lifespan of variables in a program. 
The scope can be categorized primarily into two types: global scope and local scope, but there are also nuances within these categories
*/

/*
Local Scope
Function Scope: Variables defined within a function are local to that function. 
They can only be accessed within the function where they are defined.
Block Scope (in some languages like Java, C++, but not in Python): 
Variables defined within a block (e.g., inside if statements, loops) are local to that block.

Global Scope
Global Variables: Variables defined outside of all functions and classes are in the global scope. 
They can be accessed from any part of the code after they are defined.

Non-Local Scope
Enclosing Scope (also known as non-local scope in nested functions): In Python, functions can be nested. 
A variable defined in the outer function is accessible to inner functions but is not global.

Built-in Scope
Built-in Names: Python has a set of built-in names that are always available in any scope.
*/

/*
Scope Resolution
The process by which Python resolves variable names is known as the LEGB rule:

Local: Names assigned within a function.
Enclosing: Names in the local scope of enclosing functions.
Global: Names assigned at the top-level of a module or declared global within a function.
Built-in: Names preassigned in the built-in namespace.
*/

/*
Code Breakdown

#include <iostream>
This line includes the input-output stream library, which is necessary for using cout for output.

using namespace std;
This line allows the program to use all the elements in the std namespace without prefixing them with std::. 
For example, cout is used instead of std::cout.

int main() {
This is the main function where the execution of the program begins.

int i;
A variable i of type int is declared. This variable will be used as a counter in the for loop.

for(i=1; i<=5; i++) {
A for loop is initiated with the following components:
Initialization: i=1 sets the starting value of i to 1.
Condition: i<=5 ensures the loop runs as long as i is less than or equal to 5.
Increment: i++ increases the value of i by 1 after each iteration.

cout << i << endl;
Inside the for loop, the current value of i is printed followed by a newline character. 
This line will execute five times, printing the numbers 1 through 5 each on a new line.

}
End of the for loop.

cout << i << endl;
After the for loop, the value of i is printed again. 
Since the loop increments i after the last check where i was 5, i will be 6 at this point.

return 0;
The main function returns 0, indicating that the program has executed successfully.

}
End of the main function.
*/