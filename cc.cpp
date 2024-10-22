#include <iostream>

using namespace std;

int main() {

    int x=3, y=5;

    if(x==3)
        cout << x << endl;
    else;
        cout << y << endl;
    
    return 0;
}


/*
If-Else Statement:

if (x == 3)
    cout << x << endl;
else;
    cout << y << endl;

The if statement checks if x is equal to 3.
If the condition x == 3 is true, the statement cout << x << endl; is executed, printing the value of x (which is 3) followed by a newline.

Important Note: The semicolon after the else keyword (else;) ends the else statement prematurely, making it an empty statement. 
The cout << y << endl; line is always executed regardless of the if condition because of the semicolon after else.

Output:
Since x is equal to 3, the condition x == 3 is true, so cout << x << endl; is executed, printing 3 followed by a newline.
Due to the misplaced semicolon after else, the else block is empty, and the line cout << y << endl; is executed unconditionally, 
printing 5 followed by a newline.
so, output will be:-
3
5

Note: To make the else statement work as intended, remove the semicolon after else. 
then, output will be:-
3
*/