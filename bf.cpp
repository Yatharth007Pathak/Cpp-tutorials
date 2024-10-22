#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "enter the character: ";
    cin >> ch;

    cout << "ASCII value of ch is ";
    cout << (int)ch;     

    return 0;
}

// C++ program prompts the user to input a character, then it prints the ASCII value of that character. 

/*
Here's a breakdown of the code:

#include <iostream>: This line includes the input/output stream library, which provides functionality for input and output operations.

using namespace std;: This line tells the compiler to use the std namespace. The std namespace contains many standard C++ functions 
and objects. Using this line allows us to use objects and functions from the std namespace without needing to prefix them with std::.

int main() { ... }: This is the main function of the program. All C++ programs must have a main function, 
and execution of the program starts from here.

char ch;: Declares a variable ch of type char without initializing it.

cout << "enter the character: ";: Prints the string "enter the character: " to the standard output, prompting the user to enter a character.

cin >> ch;: Reads a character input from the user and stores it in the variable ch.

cout << "ASCII value of ch is ";: Prints the string "ASCII value of ch is " to the standard output.

cout << (int)ch;: Converts the character ch to an integer using a type cast (int), then prints its ASCII value to the standard output.

return 0;: Indicates that the program has executed successfully and returns 0 to the operating system, indicating successful completion.

}: This line marks the end of the main function.
*/