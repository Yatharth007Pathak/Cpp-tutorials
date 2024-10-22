#include <iostream>

using namespace std;

int main() {

    int x = 1;
    while(x==1) {
    x=x-1;
    }
    cout << x << endl;
    
    return 0;
}

/*
Explanation:
Variable Initialization: int x = 1; declares an integer variable x and initializes it with the value 1.
While Loop: while(x == 1) { is a condition that checks if x is equal to 1. If true, the loop body will execute.
Loop Body: x = x - 1; subtracts 1 from x. Since x starts as 1, this statement will set x to 0.
Loop Condition: After decrementing x, the condition x == 1 is checked again. Since x is now 0, the condition is false, and the loop exits.
Output: cout << x << endl; } prints the current value of x followed by a newline. Since x was decremented to 0 in the loop, 0 is printe
*/

/*
xecution Flow:
When the program starts, x is initialized to 1.
The while loop checks if x is equal to 1, which is true initially.
Inside the loop, x is decremented by 1, changing its value to 0.
The while loop condition is checked again. This time, x is 0, so the condition x == 1 is false, and the loop terminates.
The value of x (which is now 0) is printed.
*/