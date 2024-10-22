#include <iostream>

using namespace std;

int main() {

    string s = "1234567";
    int x = stoi(s);
    cout << x;

    cout << endl;

    x = x + 1;
    cout << x;

    return 0;
}

// The stoi function is a standard library function that converts a string to an integer.

/*
Explanation

String to Integer Conversion:
int x = stoi(s);
Converts the string s to an integer and stores it in the variable x. 
In this case, s is "1234567", so x will be 1234567.

Print the Integer:
cout << x;
Prints the integer x to the console. The output at this point will be 1234567.

Print a New Line:
cout << endl;
Prints a newline character, moving the cursor to the next line.

Increment the Integer:
x = x + 1;
Increments the integer x by 1. After this operation, x becomes 1234568.

Print the Incremented Integer:
cout << x;
Prints the incremented integer x to the console. The output at this point will be 1234568.
*/