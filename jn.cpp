#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string y = "yatharth";
    cout << y << endl;

    reverse(y.begin(),y.end());
    cout << y << endl;

    return 0;
}

// reverse a string

/*
Explanation of Each Section

Include and Namespace:
#include <iostream>: This preprocessor directive includes the Input/Output stream library, allowing the use of cout and other I/O functionalities.
#include <algorithm>: This preprocessor directive includes the algorithm library, which provides the reverse function.
using namespace std;: This tells the compiler to use the standard namespace, which avoids the need to prefix std:: before standard library names.

Main Function:
int main() {
This is the entry point of the program. The execution starts from here.

String Initialization and Print:
string y = "yatharth";: Initializes a string variable y with the value "yatharth".
cout << y << endl;: Prints the original string. The output will be yatharth.

Reverse the String:
reverse(y.begin(), y.end());: Reverses the string y in place using the reverse function from the <algorithm> library. 
y.begin() returns an iterator to the beginning of the string, and y.end() returns an iterator to the end of the string.
cout << y << endl;: Prints the reversed string. The output will be htrahaty.

Return Statement:
return 0;
This indicates that the program ended successfully.
*/