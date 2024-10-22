#include <iostream>

using namespace std;

void print(int x, int n) {                       // function definition
    if(x>n) return;                              // Base case: if x exceeds n, stop recursion
    cout << x << endl;                           // Print the current value of x
    print(x+1,n);                                // Recursive call with x+1
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    print(1,n);                             // Calls the print function starting from 1 to n


    return 0;
}

// print numbers from 1 to n