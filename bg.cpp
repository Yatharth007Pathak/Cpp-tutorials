#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "enter the ASCII value: ";
    cin >> x;

    cout << "character is ";
    cout << (char)x; 
    

    return 0;
}

// C++ program prompts the user to input an ASCII value and then prints the corresponding character.

/*
Here's a breakdown of the code:

#include <iostream>: This line includes the input/output stream library, which provides functionality for input and output operations.

using namespace std;: This line tells the compiler to use the std namespace. The std namespace contains many standard C++ functions 
and objects. Using this line allows us to use objects and functions from the std namespace without needing to prefix them with std::.

int main() { ... }: This is the main function of the program. All C++ programs must have a main function, 
and execution of the program starts from here.

int x;: Declares a variable x of type int without initializing it.

cout << "enter the ASCII value: ";: Prints the string "enter the ASCII value: " to the standard output, 
prompting the user to enter an ASCII value.

cin >> x;: Reads an integer input from the user and stores it in the variable x.

cout << "character is ";: Prints the string "character is " to the standard output.

cout << (char)x;: Converts the integer x to a character using a type cast (char), then prints the corresponding character to the standard output.

return 0;: Indicates that the program has executed successfully and returns 0 to the operating system, indicating successful completion.
*/