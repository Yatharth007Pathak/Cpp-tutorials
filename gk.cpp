#include <iostream>

using namespace std;

void increment(int &n) {
    n++;
    return;
}

int main() {

    int num = 5;
    increment(num);
    cout << num << endl;  // Outputs 6

    return 0;
}

// Reference Parameters: Parameters that allow functions to modify the argument passed to them.