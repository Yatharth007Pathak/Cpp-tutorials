#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    int i = 0;
    do {
        i++;
        if (i % 2 == 0) {
            continue;            // Skip the rest of the loop for even numbers
        }
        cout << i << " ";        // This will print only odd numbers
    } while (i < n);
    
    return 0;
}

// print odd numbers upto n using do while loop and continue statement

/*
In a do-while loop, the continue statement causes the loop to jump to the conditional check and, 
if the condition is true, proceed with the next iteration.
*/