#include <iostream>

using namespace std;

int main() {

    int p = 1;

    int m;
    cout << "enter the side : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m; j++) {
            cout << p << " ";
            p++;
        }
        cout << endl;
    }
    
    return 0;
}

// print number square 