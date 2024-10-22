#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=i; j<=m; j++) {
            cout << " " << " ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}

// print pyramid pattern using *

/*
Here is a breakdown of the provided C++ code that prints a pyramid pattern using asterisks (*).

Include Necessary Libraries:
#include <iostream>: This line includes the input-output stream library, which is necessary for using cin and cout.

Namespace Declaration:
using namespace std;: This line allows the program to use the standard namespace. 
This means we can use cin and cout without prefixing them with std::.

Main Function:
int main() {: This line marks the beginning of the main function, which is the entry point of the program.

Variable Declaration and User Input:
int m;: This line declares an integer variable m that will hold the number of rows for the pyramid.
cout << "enter the m : ";: This line outputs a prompt asking the user to enter the value of m.
cin >> m;: This line reads the user's input and stores it in the variable m.

Outer Loop (Rows):
for(int i=1; i<=m; i++) {: This loop runs from 1 to m. It controls the number of rows in the pyramid.

Inner Loop (Leading Spaces):
for(int j=i; j<=m; j++) {: This loop runs from i to m. It prints the leading spaces for each row.
cout << " " << " ";: This line prints two space characters. The number of leading spaces decreases as i increases, ensuring the pyramid shape.

Inner Loop (Asterisks):
for(int j=1; j<=2*i-1; j++) {: This loop runs from 1 to 2*i-1. It prints the asterisks for each row.
cout << "*" << " ";: This line prints an asterisk followed by a space. The number of asterisks increases as i increases, 
specifically 2*i-1 asterisks for the i-th row.

Move to the Next Line:
cout << endl;: This line prints a newline character, moving the cursor to the next line after printing all the asterisks for the current row.

End of Main Function:
return 0;: This line indicates that the program has finished successfully.
}: This marks the end of the main function.
*/