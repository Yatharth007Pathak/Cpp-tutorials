#include <iostream>

using namespace std;

int main() {

    const int size = 100; // Maximum size of the character array
    char str[size];

    cout << "Enter a string: ";
    cin.getline(str, size);

    cout << "You entered: " << str << endl;

    return 0;
}

// This code reads a string from the user and prints it. The cin.getline function is used to read a line of text into the character array str.

/*
In computer science and programming, a string is a sequence of characters. 
Strings are used to represent text and are a fundamental data type in many programming languages.

Key Characteristics of Strings
Sequence of Characters: A string consists of characters arranged in a specific order. 
Characters can include letters, digits, symbols, and whitespace.

Null-terminated (C-style): In languages like C and C++, strings can be represented 
as arrays of characters terminated by a null character ('\0'). This null character indicates the end of the string.

Length: The length of a string is the number of characters it contains, excluding the null terminator in C-style strings.

Immutable (in some languages): In some programming languages, such as Python and Java, strings are immutable, 
meaning once created, they cannot be changed. Operations on strings in these languages create new strings.

Mutable (in other languages): In other languages, such as C++, strings can be mutable, allowing for in-place modifications.


C++ provides two primary ways to represent strings:
1. C-style Strings (Character Arrays)
2. C++ Standard Library Strings (std::string)
*/

/*
String: A sequence of characters representing text.
C-style Strings: Arrays of characters terminated by a null character.
std::string: A class in the C++ Standard Library that provides extensive functionality for string manipulation.
Using std::string in C++ is generally preferred over C-style strings due to its ease of use and the rich set of functionalities it provides.
*/