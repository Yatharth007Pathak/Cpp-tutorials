#include <iostream>                                                // Include the input-output stream library

using namespace std;

int main() {

    // Initialize a string with the value "yatharth"
    string y = "yatharth";
    cout << "original string : " << y << endl;
    cout << y.length() << endl;                                    // Print the length of the string

    // Push back 'a' to the end of the string
    y.push_back('a');
    cout << "push back string : " << y << endl;
    cout << y.length() << endl;                                    // Print the length of the string after push_back

    // Pop the last character from the string
    y.pop_back();
    cout << "pop back string : " << y << endl;
    cout << y.length() << endl;                                    // Print the length of the string after pop_back

    // Append " pathak" to the end of the string
    y.append(" pathak");
    cout << "append string : " << y << endl;
    cout << y.length() << endl;                                    // Print the length of the string after append

    // Clear the string
    y.clear();
    cout << "clear string : " << y << endl;
    cout << y.length() << endl;                                    // Print the length of the string after clear

    return 0;
}

/*
Explanation of Each Section

Include and Namespace:
#include <iostream>
using namespace std;
#include <iostream>: This preprocessor directive includes the Input/Output stream library.
using namespace std;: This tells the compiler to use the standard namespace.

Main Function:
int main() {
This is the entry point of the program. The execution starts from here.

String Initialization and Length:
string y = "yatharth";
cout << "original string : " << y << endl;
cout << y.length() << endl;
string y = "yatharth";: Initializes a string variable y with the value "yatharth".
cout << "original string : " << y << endl;: Prints the original string.
cout << y.length() << endl;: Prints the length of the string. The length is 8 for "yatharth".

Push Back Operation:
y.push_back('a');
cout << "push back string : " << y << endl;
cout << y.length() << endl;
y.push_back('a');: Appends the character 'a' to the end of the string y. The string becomes "yathartha".
cout << "push back string : " << y << endl;: Prints the modified string.
cout << y.length() << endl;: Prints the length of the modified string. The length is now 9.

Pop Back Operation:
y.pop_back();
cout << "pop back string : " << y << endl;
cout << y.length() << endl;
y.pop_back();: Removes the last character from the string y. The string reverts to "yatharth".
cout << "pop back string : " << y << endl;: Prints the modified string.
cout << y.length() << endl;: Prints the length of the modified string. The length is now 8.

Append Operation:
y.append(" pathak");
cout << "append string : " << y << endl;
cout << y.length() << endl;
y.append(" pathak");: Appends the string " pathak" to y. The string becomes "yatharth pathak".
cout << "append string : " << y << endl;: Prints the modified string.
cout << y.length() << endl;: Prints the length of the modified string. The length is now 15.

Clear Operation:
y.clear();
cout << "clear string : " << y << endl;
cout << y.length() << endl;
y.clear();: Clears the string, making it an empty string.
cout << "clear string : " << y << endl;: Prints the now-empty string.
cout << y.length() << endl;: Prints the length of the cleared string. The length is 0.

Return Statement:
return 0;
This indicates that the program ended successfully.
*/