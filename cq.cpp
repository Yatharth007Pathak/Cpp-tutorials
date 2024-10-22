#include <iostream>

using namespace std;

int main() {

    for(int i=1; i<=100; i++) {
        if(i%2==0) {
            cout << i << endl;
        }
    }
    
    return 0;
}

// print all even numbers from 1 to 100


/*
Breakdown:

For Loop:
for(int i = 1; i <= 100; i++) {
This line initializes a for loop that runs from i = 1 to i = 100 inclusive.
int i = 1 initializes the loop counter i to 1.
i <= 100 is the condition that keeps the loop running as long as i is less than or equal to 100.
i++ increments i by 1 after each iteration of the loop.

if Statement:
if(i % 2 == 0) {
This line checks if the current value of i is even.
The expression i % 2 calculates the remainder when i is divided by 2.
If i % 2 equals 0, i is even, and the condition is true.

Output Statement:
cout << i << endl;
If the if condition is true, this line prints the value of i followed by a newline character.
cout is used for output, and endl is used to insert a newline character.
*/