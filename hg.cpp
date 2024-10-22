#include <iostream>

using namespace std;

int main() {

    int x = 12;
    int *ptr = &x;
    cout << x << endl;

    x = 7;
    cout << x << endl;

    *ptr = 5;
    cout << x << endl;

    return 0;
}

// In this C++ program, we are demonstrating how changing the value of a variable directly or through a pointer affects the variable itself.

/*
Explanation of Each Step

Include the iostream Library:
#include <iostream>
This line includes the input-output stream library necessary for using cout.

Use the Standard Namespace:
using namespace std;
This allows you to use names from the standard library without prefixing them with std::.

Main Function:
int main() {
This defines the entry point of the program.

Variable Declaration and Initialization:
int x = 12;
An integer variable x is declared and initialized with the value 12.

Pointer Declaration and Initialization:
int *ptr = &x;
A pointer to an integer ptr is declared and initialized to hold the address of x.

Print Initial Value of x:
cout << x << endl;
This line prints the initial value of x, which is 12.

Modify Value of x:
x = 7;
The value of x is changed to 7 directly.

Print Modified Value of x:
cout << x << endl;
This line prints the new value of x, which is 7.

Modify Value of x via Pointer:
*ptr = 5;
The value of x is changed to 5 through the pointer ptr. 
The dereference operator (*) is used to access the value at the address stored in ptr.

Print Final Value of x:
cout << x << endl;
This line prints the final value of x, which is now 5.

Return Statement:
return 0;
Indicates that the program ended successfully.
*/