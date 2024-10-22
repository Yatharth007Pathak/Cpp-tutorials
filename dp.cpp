#include <iostream>

using namespace std;

int main() {

    int x=4, y=0;
    while(x>=0) {
        x--;
        y++;
        if(x==y) {
            continue;
        } else {
            cout <<   x << " " << y << endl;
        }
    }
    
    return 0;
}

/*
Explanation:

Variable Initialization:
int x = 4, y = 0; declares two integer variables: x is initialized to 4, and y is initialized to 0.

While Loop Condition:
while(x >= 0) ensures that the loop continues executing as long as x is greater than or equal to 0.

Loop Body:
x--; decrements x by 1.
y++; increments y by 1.
if(x == y) { continue; } checks if x is equal to y. If they are equal, the continue statement is executed, 
which skips the rest of the loop body and proceeds to the next iteration.
If x is not equal to y, the else block executes, printing the current values of x and y.
*/

/*
Execution Flow:
The program initializes x to 4 and y to 0.
The while loop starts and checks if x (initially 4) is greater than or equal to 0.
In each iteration, x is decremented by 1 and y is incremented by 1.
The program checks if x is equal to y. If they are equal, the continue statement skips the cout statement and moves to the next iteration.
If x is not equal to y, the program prints the values of x and y.
*/

/*
Output:
The program's output depends on the specific iterations where x is not equal to y. Here is the detailed breakdown of each iteration:

First Iteration:
Initial values: x = 4, y = 0
After decrement/increment: x = 3, y = 1
Since x is not equal to y, the output is 3 1.

Second Iteration:
Values: x = 3, y = 1
After decrement/increment: x = 2, y = 2
Since x is equal to y, the continue statement is executed, and nothing is printed.

Third Iteration:
Values: x = 2, y = 2
After decrement/increment: x = 1, y = 3
Since x is not equal to y, the output is 1 3.

Fourth Iteration:
Values: x = 1, y = 3
After decrement/increment: x = 0, y = 4
Since x is not equal to y, the output is 0 4.

Fifth Iteration:
Values: x = 0, y = 4
After decrement/increment: x = -1, y = 5
Since x is not equal to y, the output is -1 5.
After these iterations, x becomes -1, which makes the while condition x >= 0 false, terminating the loop.

The fifth iteration still enters the loop body because the condition x >= 0 is checked before the loop body starts. 
When x is 0, the loop condition is true, so it enters the loop body:
x-- changes x from 0 to -1.
y++ changes y from 4 to 5.
At this point, the loop condition x >= 0 is no longer true (x is -1), so the loop will terminate after this iteration. 
However, before terminating, the condition x == y (-1 == 5) is checked and found to be false, so the else block executes and prints -1 5.
*/