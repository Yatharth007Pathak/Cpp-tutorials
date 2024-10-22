#include <iostream>

using namespace std;

int factorial(int x) {
    int fact = 1;
    for(int i=1; i<=x; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    return a/(b*c);
}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=n-i; j++) {
            cout << " ";
        }
        for(int j=0; j<=i; j++) {
            cout << nCr(i,j) << " ";
        }
        cout << endl;
    }

    return 0;
}