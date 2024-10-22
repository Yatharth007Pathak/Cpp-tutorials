#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    int factor = 1;

    for(int i=n/2; i>=1; i--) {
        if(n%i==0) {
            factor = i;
            break;                       // to get out of the loop immediately
        }
    }

    cout << factor;
    
    return 0;
}

// program to find the highest factor of a 60 (other than 60 itself)