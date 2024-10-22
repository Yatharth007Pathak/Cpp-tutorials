#include <iostream>

using namespace std;

int factorial(int x) {
    int fact = 1;
    for(int i=1; i<=x; i++) {
        fact *= i;
    }
    return fact;

}

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    int r;
    cout << "enter n : ";
    cin >> r;

    int a = factorial(n);
    int b = factorial(n-r);

    cout << "permutation is : " << a/b;

    return 0;
}

// permutation of two numbers using a function