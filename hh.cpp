#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b = temp;
    return;
}

int main() {

    int x = 67;
    int y = 39;

    cout << "before swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    swap(&x,&y);    
    cout << "after swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    return 0;
}

// swap two numbers using a function and pointers

/*
Explanation of Each Part

Swap Function Definition:
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
The function swap takes two pointers to integers (int *a and int *b) as parameters.
int temp = *a;: Stores the value pointed to by a in a temporary variable temp.
*a = *b;: Assigns the value pointed to by b to the location pointed to by a.
*b = temp;: Assigns the value in temp (original value of a) to the location pointed to by b.

Main Function:
int main() {
    int x = 67;
    int y = 39;

    cout << "Before swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    swap(&x, &y);
    
    cout << "After swapping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    return 0;
}
Two integer variables, x and y, are declared and initialized with values 67 and 39, respectively.
The initial values of x and y are printed.
The swap function is called, passing the addresses of x and y.
The swapped values of x and y are printed.
*/