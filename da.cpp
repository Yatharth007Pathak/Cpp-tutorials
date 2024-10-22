#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            cout << i << " ";
        }
    }
    
    return 0;
}

// program to print all the factors of a number n 