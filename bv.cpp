#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cout << "enter 1st number : ";
    cin >> a;
    cout << "enter 2nd number : ";
    cin >> b;
    cout << "enter 3rd number : ";
    cin >> c;

    if(a>b) {                                                // a>b and a>c means a is greatest
        if(a>c) {
            cout << a << " is greatest";
        }
        else {                                               // a>b and c>a means c is greatest
            cout << c << " is greatest";
        }
    }
    else {                                                   // b>a and b>c means b is greatest
        if(b>c) {
        cout << b << " is greatest";
        }
        else {
            cout << c << " is greatest";
        }
    }

    return 0;
}

// take 3 positive integers input and print the greatest of them



/*
 let's break down the provided C++ code point by point:

Include Header File:
#include <iostream>
This line includes the iostream standard library, which provides input and output operations.

Namespace Declaration:
using namespace std;
This line allows us to use objects and functions from the std namespace without specifying the namespace explicitly each time.

Main Function:
int main() {
This is the entry point of the program. Execution of the program begins from here.

Variable Declaration:
int a, b, c;
Three integer variables a, b, and c are declared to store user input.

User Input:
cout << "enter 1st number : ";
cin >> a;
cout << "enter 2nd number : ";
cin >> b;
cout << "enter 3rd number : ";
cin >> c;
The program prompts the user to enter three numbers, and then stores them in variables a, b, and c using cin (console input).

Nested If-Else Statements:
if (a > b) {                                             
    if (a > c) {
        cout << a << " is greatest";
    } else {
        cout << c << " is greatest";
    }
} else {
    if (b > c) {
        cout << b << " is greatest";
    }
}
The outer if statement checks if a is greater than b.
If a is greater than b, an inner if statement checks if a is also greater than c. 
If it is, a is declared as the greatest number; otherwise, c is declared as the greatest.
If a is not greater than b, the inner else statement checks if b is greater than c. If it is, b is declared as the greatest number.
If none of the conditions are met, it implies that c is the greatest number, and is declared as the greatest.

Return Statement:
return 0;
This statement indicates that the program executed successfully and returns the integer value 0 to the operating system.

End of Main Function:
}
This marks the end of the main() function.
*/