#include <iostream>

using namespace std;

int main() {

    int p = 1;

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=m; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << (char)(p+64) << " ";
            p++;
        }
        cout << endl;
    }

    return 0;
}

// print horizontally flipped alphabet right triangle