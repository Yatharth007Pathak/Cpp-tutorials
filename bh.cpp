#include <iostream>

using namespace std;

int main() {
float x = 5/2;
cout << x;

cout << endl;

float y = 5.0/2;
cout << y;

    return 0;
}

// In this C++ program, we are exploring the difference between integer division and floating-point division

/*
Here's the breakdown:

#include <iostream>: This line includes the input/output stream library, which provides functionality for input and output operations.

using namespace std;: This line tells the compiler to use the std namespace. The std namespace contains many standard C++ functions and objects. 
Using this line allows us to use objects and functions from the std namespace without needing to prefix them with std::.

int main() { ... }: This is the main function of the program. All C++ programs must have a main function, 
and execution of the program starts from here.

float x = 5/2;: This line declares a variable x of type float and assigns it the result of the expression 5/2. 
However, 5/2 uses integer division, so it evaluates to 2 rather than 2.5. Therefore, x will be 2.0, not 2.5.

cout << x;: This line prints the value of x to the standard output.

cout << endl;: This line prints an end-of-line character, effectively moving the cursor to the next line.

float y = 5.0/2;: This line declares a variable y of type float and assigns it the result of the expression 5.0/2. 
Here, 5.0 is treated as a float, so the division is floating-point division, resulting in 2.5.

cout << y;: This line prints the value of y to the standard output.

return 0;: Indicates that the program has executed successfully and returns 0 to the operating system, indicating successful completion.
*/