#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "enter n : ";
    cin >> n;

    if ((n%5==0 || n%3==0) && (n%15!=0)) {
        cout << "divisible by 5 or 3 but not divisible by 15";
    }
    else {
        cout << " number either divisible by 15 or not divisibe by 5 or 3";    
    }

    return 0;
}

// take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15