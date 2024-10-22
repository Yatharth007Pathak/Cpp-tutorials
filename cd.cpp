#include <iostream>

using namespace std;

int main() {

    int x=3, y, z;

    y=x=10;
    z=x<10;

    cout << x << " " << y << " " << z;    
    
    return 0;
}

/*
The program initializes x to 3 and then reassigns x to 10, and also assigns y to 10. 
It then evaluates whether x is less than 10 (which is false) and assigns this result (0) to z. 
Finally, it prints the values of x, y, and z.
*/


/*
Variable Declarations:
int x = 3, y, z;
Three integer variables are declared: x is initialized to 3, while y and z are declared but not initialized.

Assignment Operations:
y = x = 10;
This line assigns the value 10 to x and then assigns the value of x to y. The operations are performed from right to left:
x = 10 assigns 10 to x.
y = x assigns the value of x (which is now 10) to y.
After this line, both x and y have the value 10.
z = x < 10;
This line evaluates the expression x < 10 and assigns the result to z.
Since x is 10, the expression x < 10 evaluates to false, which is represented as 0 in C++.
Therefore, z is assigned the value 0.

Output Statement:
cout << x << " " << y << " " << z;
This line outputs the values of x, y, and z to the console, separated by spaces.
Given the assignments, the output will be 10 10 0.

Return Statement:
return 0;
This line indicates that the program terminates successfully. 
Returning 0 from the main function typically signals to the operating system that the program has completed without errors.
*/