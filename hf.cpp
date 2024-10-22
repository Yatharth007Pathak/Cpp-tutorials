#include <iostream>

using namespace std;

int main() {

    int a = 8;
    int *ptr = &a;

    cout << &a << endl;                              // Print the memory address of variable 'a'
    cout << ptr << endl;                             // Print the memory address stored in 'ptr' (should be the same as &a)
    cout << a << endl;                               // Print the value of variable 'a'
    cout << *ptr << endl;                            // Print the value pointed to by 'ptr' (should be the same as 'a')
    cout << &ptr << endl;                            // Print the memory address of the pointer 'ptr'

    return 0;
}