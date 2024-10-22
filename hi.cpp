#include <iostream>

using namespace std;

int maxOfTwo(int a, int b) {
    if(a>b) return a;
    else return b;
}

int main() {

    cout << maxOfTwo(3,6);

    return 0;
}

// A function may contain more than one return statements