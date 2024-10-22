#include <iostream>

using namespace std;

int main() {

     int n;
    cout << "enter n : ";
    cin >> n;

    if(n>99 && n<1000) {
        cout << "3 digit number";
    }
    else {
        cout << "not a 3 digit number";    
    }

    return 0;
}

// take a positive integer input and tell if it is a three digit number or not


//  && is AND Operator        || is OR Operator