#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "value of x is ";
    cin >> x;
    float y = (float)x;
    cout << "half of x is ";
    cout << y/2;    

    return 0;
}

// take integer 'x' as input and print half of the number


/*
Typecasting, in computer programming, refers to the process of converting a value from one data type to another. 
This is typically done when you want to treat a value as a different type than the one it was originally defined as.
*/


/*
int x;: This declares an integer variable named x without initializing it.

cout << "value of x is ";: This line outputs the string "value of x is " to the standard output (usually the console).

cin >> x;: This line takes input from the user and stores it in the variable x.

float y = (float)x;: This line converts the value of x to a float and stores it in the variable y. 
The (float) is a type-casting operation to convert the integer value of x to a floating-point value.

cout << "half of x is ";: This line outputs the string "half of x is " to the standard output.

cout << y/2;: This line calculates half of the value stored in y (which was originally derived from x), 
and outputs the result to the standard output.

return 0;: This line indicates that the program has executed successfully and returns 0 to the operating system 
to indicate successful termination of the program.
*/