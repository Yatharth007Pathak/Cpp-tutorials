#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    if(n%2==0) {
        cout << "even number";
    }
    if(n%2!=0) {
        cout << "odd number";    
    }

    return 0;
}


// take an integer input and tell if it is even or odd