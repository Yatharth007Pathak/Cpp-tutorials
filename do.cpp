#include <iostream>

using namespace std;

int main() {

    int i=10;
    while(i=20)
    cout << "\n A computer buff!";
    
    return 0;
}

/*
Explanation:

Variable Initialization:
int i = 10; declares an integer variable i and initializes it with the value 10.

While Loop Condition:
while(i = 20) assigns the value 20 to i. In C++, the assignment expression i = 20 has the value 20,
which is non-zero and thus treated as true in the condition. This means the loop will always execute, making it an infinite loop.

Loop Body:
cout << "\n A computer buff!"; prints the string "\n A computer buff!" (a newline followed by the text) each time the loop executes.

Infinite Loop:
Since the condition i = 20 always evaluates to 20 (true), the loop will never terminate on its own. 
This makes the loop infinite unless externally interrupted (e.g., manually stopping the program).
*/


/*
If the intention is to print the message a finite number of times, the condition should be a comparison, not an assignment. 
For example, if we want to print the message 10 times, we could modify the loop as follows:


#include <iostream>

using namespace std;

int main() {

    int i = 10;                                    // Initialize i to 10
    while(i > 0) {                                 // Loop while i is greater than 0
        cout << "\n A computer buff!";             // Output the string followed by a newline
        i--;                                       // Decrement the value of i by 1
    }
    
    return 0;                                      // Return 0 to indicate that the program ended successfully
}
This corrected version will print the message 10 times and then terminate.
*/