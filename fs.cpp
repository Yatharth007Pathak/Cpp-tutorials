#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m-i+1; j++) {
            cout << " " << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// print vertically flipped number right triangle 