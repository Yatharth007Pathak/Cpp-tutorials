#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x=y;
    y = temp;
    return;
}

int main() {

    int x = 12;
    int y = 16;

    cout << "before swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    swap(x,y);    
    cout << "after swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    return 0;
}

// swap two numbers using function call by refrence

/*
Explanation of code:-

Swap Function Definition:
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
The function swap takes two integer references (int &x and int &y) as parameters.
The temp variable temporarily holds the value of x.
The value of x is assigned to y.
The value of temp (initial value of x) is assigned to y.

Main Function:
int main() {
    int x = 12;
    int y = 16;

    cout << "Before swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    swap(x, y);
    
    cout << "After swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    return 0;
}
Two integer variables, x and y, are declared and initialized with values 12 and 16, respectively.
The initial values of x and y are printed.
The swap function is called to swap the values of x and y.
The swapped values of x and y are printed.
*/