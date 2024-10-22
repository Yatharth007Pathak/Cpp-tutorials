#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    int factor = 1;

    for(int i=1; i<n; i++) {
        if(n%i==0) {
            factor = i;
        }
    }

    cout << factor;
    
    return 0;
}

// program to find the highest factor of a number n (other than n itself)