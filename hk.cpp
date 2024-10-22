#include <iostream>

using namespace std;

void print(int n) {                      // function definition
    if(n==0) return;                     // Base case: if n is 0, stop recursion
    cout << n << endl;                   // Print the current value of n
    print(n-1);                          // Recursive call with n-1
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    print(n);                            // Calls the print function starting from n to 1

    return 0;
}

// print numbers from n down to 1