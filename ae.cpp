#include <iostream>

using namespace std;

int main() {
    cout << "Har Har Mahadev";
    cout << endl;
    cout << "Jai Shree Ram";
    return 0;
}


/*
cout << "Har Har Mahadev";
This line uses cout, which is part of the std namespace, to print the string "Har Har Mahadev" 
to the standard output stream (usually the console).

cout << endl;
This line inserts a newline into the output stream using endl, also part of the std namespace. 
This ensures that the next output appears on a new line.

cout << "Jai Shree Ram";
This line prints the string "Jai Shree Ram" to the standard output stream. 
Since there is a newline inserted before this output, it will appear on a new line.
*/




/*
In C++, the << operator is known as the "stream insertion operator" and is primarily used for output operations. 
It is used to insert data into output streams, such as std::cout for console output or any other output stream.

Here's how the << operator works in C++:

Outputting Data: The << operator takes two operands: the left operand, which is the output stream (such as std::cout),
and the right operand, which is the data to be output. It inserts the data into the output stream.

Chaining Outputs: The << operator can be chained to output multiple items consecutively. For example:
std::cout << "Hello, " << "world!";
This line outputs "Hello, " followed by "world!" to the console.

Different Data Types: The << operator can be used to output various types of data, including integers, 
floating-point numbers, characters, strings, and more. It automatically formats the output according to the data type.

Manipulators: The << operator can also be used to apply manipulators, such as 
std::endl for inserting a newline or std::setw() for setting the width of the output.
*/