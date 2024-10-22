#include <iostream>

using namespace std;

int main() {

    int p = 1;

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=i; j<=m; j++) {
            cout << " " << " ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout << (char)(p+64) << " ";
            p++;
        }
        cout << endl;
    }

    return 0;
}

// print alphabet pyramid

/*
breakdown of the provided C++ code that prints a pyramid pattern using consecutive letters starting from 'A'.

Include Necessary Libraries:
#include <iostream>: This line includes the input-output stream library, which is necessary for using cin and cout.

Namespace Declaration:
using namespace std;: This line allows the program to use the standard namespace. 
This means you can use cin and cout without prefixing them with std::.

Main Function:
int main() {: This line marks the beginning of the main function, which is the entry point of the program.

Variable Declarations and User Input:
int p = 1;: This line declares and initializes an integer variable p to 1. This variable will be used to generate the letters.
int m;: This line declares an integer variable m that will hold the number of rows for the pyramid.
cout << "enter the m : ";: This line outputs a prompt asking the user to enter the value of m.
cin >> m;: This line reads the user's input and stores it in the variable m.

Outer Loop (Rows):
for(int i=1; i<=m; i++) {: This loop runs from 1 to m. It controls the number of rows in the pyramid.

Inner Loop (Leading Spaces):
for(int j=i; j<=m; j++) {: This loop runs from i to m. It prints the leading spaces for each row.
cout << " " << " ";: This line prints two space characters. The number of leading spaces decreases as i increases, ensuring the pyramid shape.

Inner Loop (Letters):
for(int j=1; j<=2*i-1; j++) {: This loop runs from 1 to 2*i-1. It prints the letters for each row.
cout << (char)(p+64) << " ";: This line prints the letter corresponding to the ASCII value of p + 64 followed by a space. 
p + 64 converts p to its corresponding uppercase letter (since 'A' is 65 in ASCII, p starts at 1 which corresponds to 'A').
p++;: This increments the variable p to get the next letter for the next iteration.

Move to the Next Line:
cout << endl;: This line prints a newline character, moving the cursor to the next line after printing all the letters for the current row.

End of Main Function:
return 0;: This line indicates that the program has finished successfully.
}: This marks the end of the main function.
*/