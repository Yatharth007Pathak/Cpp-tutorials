#include <iostream>

using namespace std;

int main() {

    for(int i=1; i<=10; i++) {
        cout << "Glory to Lord Vishnu" << endl;
    }    
    return 0;
}


/*
Looping in C++ allows you to execute a block of code repeatedly based on a condition. There are three primary types of loops in C++:
for loop                   while loop                   do-while loop


A for loop is commonly used when we know in advance how many times we want to execute a statement or a block of statements.
Syntax:
for (initialization; condition; increment) {
    // Code to be executed
}

A while loop is used when we want to execute a block of code repeatedly as long as a given condition is true.
Syntax:
initialization;
while (condition) {
    // Code to be executed
    increment;
}

A do-while loop is similar to a while loop, but the condition is evaluated after the execution of the loop's body. 
This means the loop will execute at least once.
Syntax:
initialization;
do {
    // Code to be executed
    increment;
} while (condition);
*/