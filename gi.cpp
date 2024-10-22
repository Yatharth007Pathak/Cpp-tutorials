#include <iostream>

using namespace std;

void printSum(int a, int b) {
    cout << a + b << endl;
    return;
}

int main() {
    printSum(3, 4);  // 3 is passed to a, 4 is passed to b
    
    return 0;
}

// Positional Parameters: Parameters that are passed in the order defined in the function signature.