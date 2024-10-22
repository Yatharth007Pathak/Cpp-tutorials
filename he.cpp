#include <iostream>

using namespace std;

int main() {

    int x = 3;
    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr;

    return 0;
}

/*
code breakdown:-

Variable Declaration and Initialization:
int x = 3;
Here, an integer variable x is declared and initialized with the value 3.

Pointer Declaration and Initialization:
int *ptr = &x;
int *ptr: Declares a pointer to an integer.
&x: The address-of operator (&) is used to get the memory address of x.
int *ptr = &x;: The pointer ptr is initialized to hold the address of x.

Printing the Memory Address:
cout << ptr << endl;
This line prints the value of the pointer ptr, which is the memory address of the variable x, followed by a newline.

Dereferencing the Pointer:
cout << *ptr;
This line prints the value stored at the memory address pointed to by ptr. 
The dereference operator (*) is used to access the value at the address.
*/


/*
A pointer is a variable that stores the memory address of another variable. 
Instead of holding a value directly, a pointer holds the address where the value is stored in memory.

Basic concepts related to pointers:-

Pointer Declaration:
int *ptr;                                       Declares a pointer to an integer

Pointer Initialization:
int a = 10;
int *ptr = &a;                                  ptr now holds the address of variable 'a'

Dereferencing: Dereferencing a pointer means accessing the value stored at the memory address the pointer holds.
int value = *ptr;                               value now holds the value of 'a', which is 10

Pointer Arithmetic: Pointers can be incremented or decremented to point to the next or previous memory location of the type they point to.
ptr++;                                          Moves the pointer to the next integer location in memory
*/