#include <iostream>

using namespace std;

int main() {

    int counter = 0;
    while (true) {
        cout << "counter = " << counter << endl;
        counter++;
        if (counter >= 10) {
            break;  // Exit the loop when counter reaches 10
        }
    }
    
    return 0;
}

/*
Breaking Out of an Infinite Loop
Sometimes we might intentionally create an infinite loop but need a mechanism to break out of it under certain conditions. 
This can be achieved using the break statement.
*/