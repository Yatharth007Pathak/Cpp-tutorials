#include <iostream>

using namespace std;

int main() {

    while('a'<'b') {
        cout << "malayalam is a palindrome" << endl;
    }
    
    return 0;
}

/*
Explanation:

While Loop Condition:
while('a' < 'b') checks if the character 'a' is less than the character 'b'.
In the ASCII character set, 'a' has a value of 97 and 'b' has a value of 98. Therefore, 'a' is always less than 'b'.

Loop Body:
cout << "malayalam is a palindrome" << endl; prints the string "malayalam is a palindrome" followed by a newline.

Infinite Loop:
Since 'a' < 'b' is always true, the condition for the while loop is always satisfied.
This results in an infinite loop, meaning the program will continuously print the string "malayalam is a palindrome" indefinitely.
*/