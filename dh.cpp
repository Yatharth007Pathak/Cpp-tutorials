#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;              // Skip the rest of the loop for even numbers
        }
        cout << i << " ";          // This will print only odd numbers
    }
    
    return 0;
}

// print odd numbers upto n using for loop and continue statement

// In a for loop, the continue statement causes the loop to skip to the next iteration after updating the loop control variable.