#include <iostream>

using namespace std;

int main() {

    int x = 2;
    int y = 5;

    cout << "before swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;
    int temp = x;
    x=y;
    y = temp;

    cout << "after swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    return 0;
}

// swap two numbers using a third variable