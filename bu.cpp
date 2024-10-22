#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int y = 5;

    if (x > y) {
        cout << "x is greater than y" << endl;
    } else {
        if (x < y) {
            cout << "x is less than y" << endl;
        } else {
            cout << "x is equal to y" << endl;
        }
    }

    return 0;
}

/*
In this example, there are two if-else statements nested within each other. The outer if-else statement checks if x is greater than y. 
If it is, it prints "x is greater than y". If not, it goes to the else block, where another if-else statement is nested. 
This inner if-else statement checks if x is less than y. If it is, it prints "x is less than y". If not, it prints "x is equal to y".
*/


/*
A nested if-else loop is a programming construct where one if-else statement is nested inside another if or else block. 
This allows for more complex decision-making within a program
*/