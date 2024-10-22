#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    return 0;
}

// above is a code showing string functions

/*
Library functions in C++ are pre-defined functions that are provided by the C++ Standard Library. 
These functions are designed to perform a wide variety of tasks and can be used to simplify and 
accelerate development by providing ready-made functionality.
Below are some key categories and examples of library functions available in C++:


Categories of Library Functions

I/O Functions:      Header: <iostream>
Examples:
cout: Used for outputting data to the standard output (console).
cin: Used for inputting data from the standard input (keyboard).
cerr: Used for outputting error messages.

String Functions:      Header: <string>
Examples:
string: A class to represent and manipulate strings.
getline: Reads a line of text into a string.

Mathematical Functions:      Header: <cmath>
Examples:
sqrt: Computes the square root.
pow: Computes the power of a number.
abs: Computes the absolute value.

Utility Functions:      Header: <algorithm>, <utility>
Examples:
sort: Sorts a range of elements.
swap: Swaps two elements.

Container Classes:      Header: <vector>, <map>, <set>, <list>
Examples:
vector: A dynamic array.
map: A key-value associative container.
set: A collection of unique elements.
*/

/*
Commonly Used Library Headers
<iostream>: Input and output stream objects.
<string>: String class and related functions.
<vector>: Dynamic array class.
<algorithm>: Algorithms for sorting, searching, etc.
<cmath>: Common mathematical functions.
<cstdlib>: General purpose utilities, including dynamic memory management, random number generation, and system commands.
<ctime>: C-style time and date utilities.
<map>: Associative containers that store elements in key-value pairs.
<set>: Collection of unique elements.
<list>: Doubly linked list.
*/