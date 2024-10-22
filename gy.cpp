#include <iostream>

using namespace std;

int main() {

    int x = 2;
    int y = 5;

    cout << "before swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;
    
    x = x+y;
    y = x-y;
    x = x-y;

    cout << "after swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    return 0;
}

// swap two numbers without using a third variable