#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    int factor = 1;

    for(int i=2; i<=n-1; i++) {
        if(n%i==0) {
            cout << "composite";
            break;
        }
    }
    
    return 0;
}

// program to check if a number is composite or not