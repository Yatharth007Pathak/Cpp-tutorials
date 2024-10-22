#include <iostream>

using namespace std;

int main() {
    cout << 1 << endl;
    cout << "2" << endl;
    cout << 1+2 << endl;
    cout << "1+3" << endl;
    cout << 4*5 << endl;
    cout << "5*6" << endl;
    return 0;
}


/*
cout << 1 << endl;
This line outputs the integer 1 to the standard output stream, followed by a newline. 
endl is used to insert a newline character and flush the output buffer.

cout << "2" << endl;
This line outputs the string "2" to the standard output stream, followed by a newline.

cout << 1 + 2 << endl;
This line calculates the expression 1 + 2 (which evaluates to 3) and outputs the 
result 3 to the standard output stream, followed by a newline.

cout << "1+3" << endl;
This line outputs the string "1+3" to the standard output stream, followed by a newline. 
Note that the expression 1+3 is not evaluated because it's enclosed in quotes and treated as a string literal.

cout << 4 * 5 << endl;
This line calculates the expression 4 * 5 (which evaluates to 20) and outputs the result 20 
to the standard output stream, followed by a newline.

cout << "5*6" << endl;
This line outputs the string "5*6" to the standard output stream, followed by a newline. 
As before, the expression 5*6 is treated as a string literal and not evaluated.
*/