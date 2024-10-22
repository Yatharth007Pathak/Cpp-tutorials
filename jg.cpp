#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str1[50] = "Hello";
    char str2[] = ", World!";

    strcat(str1, str2);                                            // Concatenate str2 to str1
    cout << "After concatenation: " << str1 << endl;

    return 0;
}

// Concatenating Two Character Arrays