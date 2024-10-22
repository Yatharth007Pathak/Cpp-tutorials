#include <iostream>

using namespace std;

int main() {

    do {
        cout << "This loop will run forever" << endl;
    } while (true);
    
    return 0;
}

/*
A do-while loop can be infinite if the condition always evaluates to true.
The condition true always evaluates to true, so the loop runs indefinitely after executing the loop body at least once
*/