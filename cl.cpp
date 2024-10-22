#include <iostream>

using namespace std;

int main() {

    for (int i = 0; ; ++i) {
        cout << "i = " << i << endl;
    }
    
    return 0;
}

/*
An infinite loop in C++ is a loop that runs indefinitely because the loop's terminating condition is never met. 
Infinite loops are generally considered a programming error unless intentionally used, 
for example, in programs that are meant to run continuously until manually stopped, like operating systems or server processes.
*/

/*
A for loop can become infinite if the loop condition never becomes false. 
The condition part of the for loop is omitted, which defaults to true. Thus, the loop runs indefinitely.
*/