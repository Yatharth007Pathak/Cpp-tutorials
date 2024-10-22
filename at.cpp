#include <iostream>

using namespace std;

int main() {
    int x = 2;
    cout << x << endl;
    cout << x++ << endl;
    cout << x << endl;

    int y = 4;
    cout << y << endl;
    cout << ++y << endl;
    cout << y << endl;

    int a = 6;
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    int b = 8;
    cout << b << endl;
    cout << --b << endl;
    cout << b << endl;


    return 0;
}


/*
int x = 2;: This line declares an integer variable named x and initializes it with the value 2.
cout << x << endl;: This line prints the current value of x to the standard output stream (usually the console), 
followed by an end-of-line character. So, it will print "2" followed by a newline.
cout << x++ << endl;: This line prints the current value of x and then increments it by 1. 
The postfix increment operator x++ returns the current value of x and then increments x. So, it will print "2" and then increment x to 3.
cout << x << endl;: This line prints the updated value of x, which is now 3.

int y = 4;: This line declares an integer variable named y and initializes it with the value 4.
cout << y << endl;: This line prints the current value of y, which is 4.
cout << ++y << endl;: This line increments the value of y by 1 and then prints it. The prefix increment operator ++y 
increments y and then returns the updated value. So, it will print "5" because y is incremented before being printed.
cout << y << endl;: This line prints the updated value of y, which is now 5.

int a = 6;: This line declares an integer variable named a and initializes it with the value 6.
cout << a << endl;: This line prints the current value of a, which is 6.
cout << a-- << endl;: This line prints the current value of a and then decrements it by 1. The postfix decrement operator a-- 
returns the current value of a and then decrements a. So, it will print "6" and then decrement a to 5.
cout << a << endl;: This line prints the updated value of a, which is now 5.

int b = 8;: This line declares an integer variable named b and initializes it with the value 8.
cout << b << endl;: This line prints the current value of b, which is 8.
cout << --b << endl;: This line decrements the value of b by 1 and then prints it. The prefix decrement operator --b 
decrements b and then returns the updated value. So, it will print "7" because b is decremented before being printed.
cout << b << endl;: This line prints the updated value of b, which is now 7
*/
