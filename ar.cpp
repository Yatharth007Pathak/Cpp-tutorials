#include <iostream>

using namespace std;

int main() {
    int x = 5;
    cout << x << endl;
    x++;
    cout << x << endl;
    x--;
    cout << x << endl;
    ++x;
    cout << x << endl;
    --x;
    cout << x << endl;
        
    return 0;
}


// Increment Decrement operators

/*
int x = 5;: This line declares an integer variable named x and initializes it with the value 5.

cout << x << endl;: This line prints the current value of x to the standard output stream (usually the console), 
followed by an end-of-line character. So, it will print "5" followed by a newline.

x++;: This line increments the value of x by 1. So, after this line, x will have the value 6.

cout << x << endl;: This line prints the updated value of x, which is now 6.

x--;: This line decrements the value of x by 1. So, after this line, x will have the value 5 again.

cout << x << endl;: This line prints the updated value of x, which is now 5 again.

++x;: This line increments the value of x by 1 before using its value. So, x becomes 6.

cout << x << endl;: This line prints the updated value of x, which is now 6.

--x;: This line decrements the value of x by 1 before using its value. So, x becomes 5 again.

cout << x << endl;: This line prints the updated value of x, which is now 5.
*/