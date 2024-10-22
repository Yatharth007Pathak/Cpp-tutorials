#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            if((i+j)%2==0) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

// print 0 and 1 right triangle

/*
This C++ program generates a pattern of 1s and 0s based on the sum of row and column indices. 
Specifically, it prints a triangle of numbers where the sum of the indices determines whether to print a 1 or a 0. 
Here's a detailed breakdown of how the code works:

#include <iostream>: This line includes the input-output stream library, which is necessary for input and output operations.

using namespace std;: This line allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number entered by the user.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter a number.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the triangle.

for(int j=1; j<=i; j++) { ... }: This inner for loop iterates from 1 to the current value of i, 
controlling the number of elements in each row.

if((i+j)%2==0) { ... } else { ... }: Checks whether the sum of the row index (i) and column index (j) is even or odd.

if((i+j)%2==0) { cout << 1 << " "; }: If the sum of i and j is even, it prints 1.
else { cout << 0 << " "; }: If the sum of i and j is odd, it prints 0.
cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/