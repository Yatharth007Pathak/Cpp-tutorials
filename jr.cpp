#include <iostream>

using namespace std;

int main() {

    int x = 1234567;
    string s = to_string(x);
    cout << s;

    cout << endl;

    s = s + "yp";
    cout << s;

    return 0;
}

// The to_string function is a standard library function that converts various data types to their string representation.

/*
Explanation

Integer to String Conversion:
int x = 1234567;: Initializes an integer variable x with the value 1234567.
string s = to_string(x);: Converts the integer x to a string and stores it in the string variable s.
In this case, x is 1234567, so s will be "1234567".

Print the String:
cout << s;
Prints the string s. Since x was converted to "1234567", the output at this point will be 1234567.

Print a New Line:
cout << endl;
Prints a newline character, moving the cursor to the next line.

Append to the String:
s = s + "yp";
Appends the string "yp" to the end of the string s. The + operator concatenates two strings. After this operation, s becomes "1234567yp".

Print the Modified String:
cout << s;
Prints the modified string s. The output at this point will be 1234567yp.
*/