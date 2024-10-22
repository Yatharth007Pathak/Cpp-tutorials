#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string y ="yatharth";
    cout << y << endl;
    int n = y.length();

    reverse(y.begin(),y.begin()+n/2);
    cout << y << endl;

    return 0;
}

// input a string of even length and reverse the first half of the string

/*
code breakdown

Include and Namespace:
#include <iostream>: Includes the Input/Output stream library, allowing the use of cout and other I/O functionalities.
#include <algorithm>: Includes the algorithm library, which provides the reverse function.
using namespace std;: Tells the compiler to use the standard namespace, which avoids the need to prefix std:: before standard library names.

Main Function:
int main() {
This is the entry point of the program. The execution starts from here.

String Initialization and Print:
string y = "yatharth";: Initializes a string variable y with the value "yatharth".
cout << y << endl;: Prints the original string y. The output will be yatharth.

Get Length of the String:
int n = y.length();: Gets the length of the string y and stores it in the variable n. For the string "yatharth", n will be 8.

Reverse the First Half of the String:
reverse(y.begin(), y.begin() + n / 2);: Reverses the first half of the string y. The reverse function is called with two iterators:
one pointing to the beginning of the string (y.begin()) and the other pointing to the middle of the string (y.begin() + n / 2). 
For the string "yatharth", this results in reversing the substring "yath" (the first 4 characters).
cout << y << endl;: Prints the modified string. After reversing the first half, the output will be htayarht.

Return Statement:
return 0;
This indicates that the program ended successfully.
*/