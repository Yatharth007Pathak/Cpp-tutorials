#include <iostream>
#include <string> // For std::string

using namespace std;

int main() {

    // Creating strings
    string str1 = "Hello";
    string str2 = "World";

    // Printing a string
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // Getting the length of a string
    cout << "Length of str1: " << str1.length() << endl;

    // Copying one string to another
    str1 = str2;
    cout << "str1 after copy: " << str1 << endl;

    // Concatenating two strings
    str1 += "!";
    cout << "str1 after concatenation with !: " << str1 << endl;

    // Concatenating two strings
    str1 += str2;
    cout << "str1 after concatenation with str2: " << str1 << endl;

    // Comparing two strings
    if (str1 == str2) {
        cout << "str1 and str2 are equal." << endl;
    } else {
        cout << "str1 and str2 are not equal." << endl;
    }

    // Substring (Gets a substring starting at index 1 with length 3)
    cout << "substr: " << str1.substr(1, 3) << endl;

    // Finding a Character or Substring (Finds the first occurrence of 'r')
    cout << "pos: " << str1.find('r') << endl;

    // Inserting (Inserts "abc" at index 1)
    cout << "str2: " << str2.insert(1, "abc") << endl;

    // Erasing (Erases 3 characters starting from index 1)
    cout << "str2: " << str2.erase(1, 3) << endl;

    // Replacing (Replaces 3 characters starting from index 1 with "xyz")
    cout << "str2: " << str2.replace(1, 3, "xyz") << endl;

    return 0;
}

/*
std::string (C++ Standard Library)
The std::string class provides a more convenient and powerful way to work with strings. 
It handles memory management and provides a wide range of functionalities.
*/

/*
Advantages of std::string over C-style Strings
Ease of Use: std::string is easier to work with and requires less manual management of memory and null terminators.
Safety: std::string helps prevent common bugs related to buffer overflows and manual memory management.
Functionality: std::string provides a rich set of member functions for various string operations, 
such as concatenation, comparison, substring extraction, and more.
Automatic Memory Management: std::string automatically manages memory allocation and deallocation, reducing the risk of memory leaks.
*/