#include <iostream>

using namespace std;

int main() {
    int i=11;
    do{
        cout << i << endl;
        i++;
    } while(i<=10);
    
    return 0;
}

// do-while loop ensures that the code inside the loop is executed at least once before checking the condition.

/*
Execution Flow:
When the program starts, i is initialized to 11.
The do block executes, printing 11 to the console.
i is incremented to 12.
The condition i <= 10 is checked. Since i is now 12, which is greater than 10, the condition is false.
The loop terminates because the condition is not satisfied after the first iteration.
*/