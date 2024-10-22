#include <iostream>

using namespace std;

int main() {

    int p = 1;

    int m;
    cout << "enter the m : ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            if(i%2==0) {
                cout << (char)(p+64) << " ";
                p++;
            } else {
                cout << p << " ";
                p++;
            }
        }
        cout << endl;
    }
    
    return 0;
}

// print the alpha numerical right triangle