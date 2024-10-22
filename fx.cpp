#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=i; j<=m; j++) {
            cout << " " << " ";
        }
        for(int j=1; j<=2*i-1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// print number pyramid