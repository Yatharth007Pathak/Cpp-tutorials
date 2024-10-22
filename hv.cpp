#include <iostream>

using namespace std;

void change(int x) {
    x = 8;
}

void changed(int arr[]) {
    arr[0] = 9;
}

int main() {

    int x = 3;
    cout << x << endl;
    change(x);
    cout << x << endl;

    cout << endl;

    int arr[3] = {1,2,3};
    for(int i=0; i<=2; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    changed(arr);
    for(int i=0; i<=2; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// passing array to functions

/*
break down the given C++ code:-

change Function
void change(int x) {
    x = 8;
}
This function takes an integer parameter x and assigns it the value 8. 
However, this change is local to the function and does not affect the original variable passed to it.

changed Function
void changed(int arr[]) {
    arr[0] = 9;
}
This function takes an array parameter arr and changes the first element of the array to 9. 
Since arrays are passed by reference, this change will affect the original array.

Demonstrating Pass-by-Value
int x = 3;
cout << x << endl;
change(x);
cout << x << endl;
An integer x is declared and initialized to 3.
The value of x is printed (output: 3).
The change function is called with x as an argument. 
Inside the function, x is set to 8, but this change does not affect the x in main because x is passed by value.
The value of x is printed again (output: 3), showing that it remains unchanged.

Demonstrating Pass-by-Reference for Arrays
cout << endl;

int arr[3] = {1, 2, 3};
for(int i = 0; i <= 2; i++) {
    cout << arr[i] << " ";
}
cout << endl;
changed(arr);
for(int i = 0; i <= 2; i++) {
    cout << arr[i] << " ";
}

return 0;
}
An integer array arr of size 3 is declared and initialized with values {1, 2, 3}.
A for loop prints the elements of arr (output: 1 2 3).
The changed function is called with arr as an argument. 
Inside the function, the first element of arr is set to 9. Since arrays are passed by reference, this change affects the original array.
Another for loop prints the elements of arr (output: 9 2 3), showing that the first element has been modified.
*/