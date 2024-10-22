#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the value of n : ";
    cin >> n;

    for(int i=4; i<=3*n+1; i+=3) {
        cout << i << endl;
    }

    
    return 0;
}

// display the arithmetic progression 4,7,10,13,16.... upto n terms

/*
nth term = a + (n-1)*d   where a is first term, n is no. of term and d is common difference
on putting a=4, n=n and d=3, above equation modify as nth term = 4 + (n-1)*3
which is nth term = 3*n + 1
*/