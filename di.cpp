#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    int i = 0;
    while (i < n) {
        i++;

        if (i % 2 == 0) {
            continue;               // Skip the rest of the loop for even numbers
        }
        cout << i << " ";           // This will print only odd numbers
    }
    
    return 0;
}

// print odd numbers upto n using while loop and continue statement

// In a while loop, the continue statement causes the loop to re-evaluate the condition and, if true, start the next iteration