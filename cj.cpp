#include <iostream>

using namespace std;

int main() {

    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }

    cout << "Sum of the first 10 natural numbers is " << sum << endl;
    
    return 0;
}

// using a loop to calculate the sum of the first 10 natural numbers.