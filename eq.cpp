#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            if(i%2==0) {
                cout << (char)(j+64) << " ";
            } else {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

// print the alpha numerical right triangle

/*
This C++ program prints a right-angled triangle pattern with a twist: odd rows contain numbers starting from 1, 
while even rows contain corresponding uppercase letters starting from 'A'. Here's a breakdown of the code:

#include <iostream>: Includes the input-output stream library, which is necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number of rows entered by the user.

cout << "enter the m : ";: Displays the message "enter the m : " to prompt the user to enter the number of rows.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This outer for loop iterates from 1 to m, controlling the number of rows in the triangle.

for(int j=1; j<=i; j++) { ... }: This inner for loop iterates from 1 to the current row number i, 
controlling the number of elements to be printed in each row.

if(i%2==0) { ... } else { ... }: This conditional statement checks if the current row number i is even.

cout << (char)(j+64) << " ";: If i is even, this line prints the corresponding uppercase letter for the current column number j. 
The expression (char)(j+64) converts the number j to its corresponding uppercase letter:

ASCII value of 'A' is 65, so for j=1, j+64 equals 65, which corresponds to 'A'.
For j=2, j+64 equals 66, which corresponds to 'B', and so on.
cout << j << " ";: If i is odd, this line prints the current column number j followed by a space.

cout << endl;: After completing the inner loop for a row, it prints a newline character to move to the next row.

return 0;: Indicates successful termination of the program.
*/