#include <iostream>

using namespace std;

int main() {

    int x = 3;
    int y = 3;
    cout << &x << endl;
    cout << &y << endl;

    return 0;
}

/*
In this C++ program, you are printing the memory addresses of two integer variables, x and y. 
Here's a breakdown of the program:

Include the iostream Library:
#include <iostream>
This line includes the input-output stream library, which is necessary for using cout.

Use the Standard Namespace:
using namespace std;
This line allows you to use names from the standard library without prefixing them with std::.

Main Function:
int main() {
This defines the entry point of the program.

Variable Declarations:
int x = 3;
int y = 3;
Here, two integer variables x and y are declared and initialized with the value 3.

Print Memory Addresses:
cout << &x << endl;
cout << &y << endl;
&x and &y are the addresses of the variables x and y, respectively. cout prints these addresses to the standard output.

Return Statement:
return 0;
This indicates that the program ended successfully.
*/

