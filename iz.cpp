#include <iostream>
#include <cstring> // For strlen, strcpy, strcat, strcmp

using namespace std;

int main() {

    // Creating strings
    char str1[20] = "Hello";
    char str2[20] = "World";

    // Printing a C-style string
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // Getting the length of a C-style string
    cout << "Length of str1: " << strlen(str1) << endl;

    // Copying one C-style string to another
    strcpy(str1, str2);
    cout << "str1 after strcpy: " << str1 << endl;

    // Concatenating two C-style strings
    strcat(str1, str2);
    cout << "str1 after strcat with str1: " << str1 << endl;

    // Concatenating two C-style strings
    strcat(str1, "!");
    cout << "str1 after strcat with !: " << str1 << endl;

    // Comparing two C-style strings
    if (strcmp(str1, str2) == 0) {
        cout << "str1 and str2 are equal." << endl;
    } else {
        cout << "str1 and str2 are not equal." << endl;
    }

    return 0;
}

/*
C-style Strings (Character Arrays)
C-style strings are arrays of characters terminated by a null character ('\0'). This null character indicates the end of the string.
*/