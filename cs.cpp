#include <iostream>

using namespace std;

int main() {

    for(int i=1; i<=190; i++) {
        if(i%19==0) {
            cout << i << endl;
        }
    }
    
    return 0;
}

// print the table of 19

// note that above loop is running 190 times