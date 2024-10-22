#include <iostream>

using namespace std;

int main() {
    
    int x =10, y=20;

    if(x==y);
    cout << x << " " << y;
    
    return 0;
}

/*
The code declares two integer variables, x and y, assigns them the values 10 and 20, respectively, 
checks if x equals y (which has no effect due to the semicolon), and then prints the values of x and y to the console. The output will be:
10 20
*/

/*
Points of Interest:
The semicolon at the end of the if statement results in an empty statement, making the condition check effectively useless. 
To make the if statement meaningful, we should remove the semicolon and add a block of code to execute when the condition is true:

if (x == y) {
    // Code to execute if x equals y
}
*/


/*
Breakdown:

Include Directive:
#include <iostream>
This line includes the iostream library, which is necessary for input and output operations.

Namespace Declaration:
using namespace std;
This line allows the program to use all the standard library names directly without the std:: prefix. 
For example, we can use cout instead of std::cout.

Main Function:
int main() {
This is the entry point of the program. The int type indicates that the function returns an integer value.

Variable Declarations and Initializations:
int x = 10, y = 20;
Two integer variables, x and y, are declared and initialized with the values 10 and 20, respectively.

If Statement with a Semicolon:
if (x == y);
This line is a conditional statement intended to check if x is equal to y.
Important Note: The semicolon (;) at the end of the if statement terminates the if condition immediately, 
making it an empty statement. This means that no code block is executed based on the result of the if condition.
As a result, the comparison x == y has no effect on the program's execution.

Output Statement:
cout << x << " " << y;
This line outputs the values of x and y to the console. Since there is no newline character (\n) or endl, the output will be on the same line.
Given the initial values of x and y, the output will be 10 20.

Return Statement:
return 0;
This line indicates that the program terminates successfully. 
Returning 0 from the main function typically signals to the operating system that the program has completed without errors.
*/