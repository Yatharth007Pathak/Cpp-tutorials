#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int a = 7;

    for(int i=1; i<=n; i++) {
        cout << a << endl;
        a = a*3;
    }
    
    return 0;
}

// display the geometric progression 7,21,63,189,567.... upto n terms
    