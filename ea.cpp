#include <iostream>

using namespace std;

int main() {

    int m;
     
    cout << "enter number of rows : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        cout << "* * * * * * * *" << endl;
    }
    
    return 0;
}

// print solid rectangle using * having 'm' rows entered by by the user and 8 columns

/*
This C++ program prints a specified number of rows, each containing the same pattern of asterisks ("*"). 
Here's a breakdown of how the code works:

#include <iostream>: Includes the input-output stream library, necessary for input and output operations.

using namespace std;: Allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: Main function where the program execution begins. It returns an integer value indicating the exit status of the program.

int m;: Declares an integer variable m to store the number of rows entered by the user.

cout << "enter number of rows : ";: Displays the message "enter number of rows : " to prompt the user to enter the number of rows.

cin >> m;: Takes input from the user and stores it in the variable m.

for(int i=1; i<=m; i++) { ... }: This for loop iterates from 1 to m, controlling the number of rows to be printed.

cout << "* * * * * * * *" << endl;: Prints a line of eight asterisks separated by spaces and then moves to the next line.

return 0;: Indicates successful termination of the program.
*/