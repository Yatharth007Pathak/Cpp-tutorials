#include <iostream>

using namespace std;

int main() {

    for(int i=1; i<=100; i++) {
        if(i%2!=0) {
            cout << i << endl;
        }
    }
    
    return 0;
}

// print all odd numbers from 1 to 100


/*
another method to do this :-

for(int i=1; i<=100; i=i+2) {
    cout << i << endl;
}


*/