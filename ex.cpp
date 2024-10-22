#include <iostream>

using namespace std;

int main() {

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=m; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// print horizontally flipped number right triangle