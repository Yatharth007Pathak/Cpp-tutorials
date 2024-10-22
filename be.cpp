#include <iostream>

using namespace std;

int main() {
    char ch = 'b';
    cout << ch << endl;

    float y = (float)ch;
    cout << "ASCII value of ch is ";
    cout << y;

    return 0;
}


// we can find ASCII value of any character using typecasting

// ASCII value of  a = 97     z = 122      A = 65     Z = 90     0 = 48      9 = 57


/*
break down the provided C++ code:

#include <iostream>: This line includes the input/output stream library, which provides functionality for input and output operations.

using namespace std;: This line tells the compiler to use the std namespace. The std namespace contains many standard C++ functions 
and objects. Using this line allows us to use objects and functions from the std namespace without needing to prefix them with std::.

int main() { ... }: This is the main function of the program. All C++ programs must have a main function, 
and execution of the program starts from here.

char ch = 'b';: Declares a variable ch of type char and initializes it with the character 'b'.

cout << ch << endl;: Prints the value of ch to the standard output (usually the console), followed by an end-of-line character (endl).

float y = (float)ch;: Converts the char variable ch to a float type. The (float) is a type cast, which explicitly converts 
the value of ch to a float. Note that in C++, characters are essentially integers representing ASCII values, 
so here 'b' would be converted to its ASCII value.

cout << "ASCII value of ch is ";: Prints the string "ASCII value of ch is " to the standard output.

cout << y;: Prints the value of y to the standard output. Since y now holds the ASCII value of the character 'b', it will print that value.

return 0;: Indicates that the program has executed successfully and returns 0 to the operating system, indicating successful completion.
*/