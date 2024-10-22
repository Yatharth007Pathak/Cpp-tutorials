#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Enter the side length of square: ";
    cin >> x;
    cout << "area of square is ";
    cout << x*x;

    return 0;
}

// area of square after taking input from user


/*
Here's a breakdown of the code:

#include <iostream>: This line includes the input-output stream library, which allows the program to perform input and output operations.
using namespace std;: This line declares that the program will use the std namespace. The std namespace contains all the standard C++ symbols.
int main() { ... }: This is the main function where the execution of the program begins.
int x;: Declares an integer variable x to store the side length of the square.
cout << "Enter the side length of square: ";: Prints a message asking the user to enter the side length of the square.
cin >> x;: Reads the user input for the side length of the square and stores it in the variable x.
cout << "area of square is ";: Prints a message indicating that the following output will be the area of the square.
cout << x*x;: Calculates the area of the square (x*x) and prints it.
return 0;: Indicates that the program executed successfully and returns 0 to the operating system.
*/