#include <iostream>

using namespace std;

void print(int n) {                      // function definition
    if(n==0) return;                     // Base case: if n is 0, stop recursion
    print(n-1);                          // Recursive call with n-1
    cout << n << endl;                   // Print the current value of n after the recursive call
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    print(n);                            // Calls the print function with argument n

    return 0;
}

// print numbers from 1 to n without using any extra parameter