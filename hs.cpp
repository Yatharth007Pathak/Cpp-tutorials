#include <iostream>

using namespace std;

int main() {

    // Declaration of an array
    int y[5];

    // Initialization of an array
    y[0] = 1;
    y[1] = 3;
    y[2] = 5;
    y[3] = 7;
    y[4] = 9;

    // printing the elements of array
    for(int i=0; i<=4; i++) {
        cout << y[i] << " ";
    }
    
    return 0;
}

/*
indexing of an array cosisting of n elements begins with 0 and ends with n-1
e.g. y[3] means 2nd index element or 3rd element from start
*/