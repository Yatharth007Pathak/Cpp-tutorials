#include <iostream>

using namespace std;

int main() {
    
    int m;
    cout << "enter the side : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m; j++) {
            cout << (char)(j+64) << " ";
        }
        cout << endl;
    }

    return 0;
}

// print alphabet square