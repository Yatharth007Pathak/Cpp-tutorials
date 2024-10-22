#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=m; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// print horizontally flipped right triangle using *

/*
note:- we could have also used given line of code inside the for loop
for(int i=1; i<=m; i++) {
        for(int j=1; j<=m-i+1; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
*/