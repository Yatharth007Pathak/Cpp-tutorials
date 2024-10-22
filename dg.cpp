#include <iostream>

using namespace std;

int main() {

for(int i=1; i<=20; i++) {
    if(i==3 || i==8) {
        continue;
    }
    cout << i << endl;
}

    return 0;
}

// print numbers from 1 to 20 except 3 and 8


/*
The continue statement in C++ is used to skip the remaining part of the loop's body and immediately jump to the next iteration of the loop. 
It is commonly used in for, while, and do-while loops to bypass certain conditions without exiting the loop entirely.

In programming, the continue statement is used within loops to skip the rest of the current iteration and proceed directly to the next iteration. 
This can be useful when we need to bypass certain conditions or parts of the loop body without completely terminating the loop
*/


/*
we could have also used given line of code:-

for(int i=1; i<=20; i++) {
    if(i!=3 && i!=8) {
        cout << i << endl;
    }
}
*/