#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str1[] = "Hello";
    char str2[] = "World";

    int result = strcmp(str1, str2);                               // Compare str1 and str2

    if (result == 0) {
        cout << "The strings are equal." << endl;
    } else if (result < 0) {
        cout << "str1 is less than str2." << endl;
    } else {
        cout << "str1 is greater than str2." << endl;
    }

    return 0;
}

// Comparing Two Character Arrays