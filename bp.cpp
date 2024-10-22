#include <iostream>

using namespace std;

int main() {
    
     int n;
    cout << "enter n : ";
    cin >> n;

    if(n%5==0 || n%3==0) {
        cout << "divisible by 5 or 3";
    }
    else {
        cout << "not divisible by 5 or 3";    
    }

    return 0;
}

// take a positive integer input and tell if it is divisible by 5 or 3