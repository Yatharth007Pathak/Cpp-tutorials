#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            cout << 2*j-1 << " ";
        }
        cout << endl;
    }

    return 0;
}

// print the odd number right triangle

/*
note:- we could have also used given line of code inside the for loop
for(int i=1; i<=m; i++) {
    for(int j=1; j<=2*i; j+=2) {
        cout << j << " ";
    }
    cout << endl;
}

    OR

for(int i=1; i<=m; i++) {
    int a = 1;
    for(int j=1; j<=2*i; j+=2) {
        cout << a << " ";
        a+=2;
    }
    cout << endl;
}
*/