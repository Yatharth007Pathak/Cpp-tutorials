#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int a = 5;

    for(int i=1; i<=n; i++) {
        cout << a << endl;
        a = a + 7;
    }

    return 0;
}

// display the arithmetic progression 5,12,19,26,33.... upto n terms   (common difference is 7)