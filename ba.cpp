#include <iostream>

using namespace std;

int main() {
    int a=34, b=5;
    cout << a%b;

    cout << endl;

    int p=5, q=8;
    cout << p%q;
    return 0;
}


/*
important points related to modulus operator
x%y = x   (if x<y)
c%c = 0
r%(-s) = r%s
(-r)%s = -[r%s]
*/ 