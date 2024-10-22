#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = x++;                     // y gets the value of x (5), then x is incremented         Now, x = 6, y = 5
    cout << x << endl;
    cout << y << endl;

    int a = 5;
    int b = ++a;                     // a is incremented first, then b gets the value of a       Now, a = 6, b = 6
    cout << a << endl;
    cout << b << endl;

    int p = 10;
    int q = p--;                     // q gets the value of p (10), then p is decremented        Now, p = 9, q = 10
    cout << p << endl;
    cout << q << endl;

    int r = 10;
    int s = --r;                     // r is decremented first, then s gets the value of r       Now, r = 9, s = 9
    cout << r << endl;
    cout << s << endl;
        
    return 0;
}


/*
Increment and decrement operators are unary operators in C++ used to increase or decrease the value of a variable by 1, respectively. 
These operators can be used either as postfix operators (placed after the variable) or prefix operators (placed before the variable).

Prefix increment (++x) increments the value of x by 1 and then returns the incremented value.
Prefix decrement (--x) decrements the value of x by 1 and then returns the decremented value.

Postfix increment (x++) returns the current value of x and then increments x by 1.
Postfix decrement (x--) returns the current value of x and then decrements x by 1.


Increment Operator (++):
The increment operator adds 1 to the value of a variable.
It can be used in two forms: postfix and prefix.
Postfix Increment (x++) : The current value of the variable is used first, and then the variable is incremented.
Prefix Increment (++x) : The variable is incremented first, and then its value is used.

Decrement Operator (--):

The decrement operator subtracts 1 from the value of a variable.
Similar to the increment operator, it also has postfix and prefix forms.
Postfix Decrement (x--) : The current value of the variable is used first, and then the variable is decremented.
Prefix Decrement (--x) : The variable is decremented first, and then its value is used.

*/