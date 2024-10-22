#include <iostream>

using namespace std;

int main() {

    int i;
    while(i=10) {
        cout << i << endl;
        i=i+1;
    }
    
    return 0;
}

/*
Explanation:

Variable Declaration: 
int i; declares an integer variable i but does not initialize it. The initial value of i is indeterminate.

While Loop Condition: 
while(i = 10) assigns the value 10 to i. In C++, the assignment expression i = 10 has the value 10, 
which is non-zero and thus treated as true in the condition. This means the loop will always execute, making it an infinite loop.

Loop Body:
cout << i << endl; prints the value of i (which is 10 in every iteration) followed by a newline.
i = i + 1; increments the value of i by 1, changing it from 10 to 11 after the first iteration.

Infinite Loop:
Since the condition i = 10 always evaluates to 10 (true), the loop will never terminate on its own. 
This makes the loop infinite unless externally interrupted (e.g., manually stopping the program).
*/

/*
note:- If the intended behavior was to have a loop that executes a certain number of times, 
the condition should be a comparison (==), not an assignment (=).
For example, to print numbers from 10 onwards, we could initialize i to 10 and use a comparison in the while condition e.g. while(i <= 20)
This corrected version will print numbers from 10 to 20 and then terminate. 
*/