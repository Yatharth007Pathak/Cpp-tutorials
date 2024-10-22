#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the value of n : ";
    cin >> n;

    for(int i=1; i<=2*n-1; i+=2) {
        cout << i << endl;
    }

    
    return 0;
}

// display the arithmetic progression 1,3,5,7,9.... upto n terms

/*
nth term = a + (n-1)*d   where a is first term, n is no. of term and d is common difference
on putting a=1, n=n and d=2, above equation modify as nth term = 1 + (n-1)*2
which is nth term = 2*n - 1
*/