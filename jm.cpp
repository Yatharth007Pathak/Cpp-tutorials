#include <iostream>

using namespace std;

int main() {

    string y = "yatharth ";
    cout << y << y.length() << endl;

    y = y + "pathak ";
    cout << y << y.length() << endl;

    y = "pathak " + y;
    cout << y << y.length() << endl;

    return 0;
}

// concatination of two strings


/*
Explanation of code:-

String Initialization and Length:
string y = "yatharth ";: Initializes a string variable y with the value "yatharth".
cout << y << y.length() << endl;: Prints the original string followed by its length. 
The output will be yatharth 9, indicating the string "yatharth " and its length of 9 characters.

Concatenation to the End:
y = y + " pathak";: Concatenates the string " pathak " to the end of the string y. The string y now becomes "yatharth pathak ".
cout << y << y.length() << endl;: Prints the modified string followed by its length. 
The output will be yatharth pathak 16, indicating the new string "yatharth pathak " and its length of 16 characters.

Concatenation to the Beginning:
y = " pathak" + y;: Concatenates the string " pathak" to the beginning of the string y. The string y now becomes " pathakyatharth pathak".
cout << y << y.length() << endl;: Prints the modified string followed by its length. 
The output will be pathak yatharth pathak 23, indicating the new string "pathak yatharth pathak " and its length of 23 characters.
*/