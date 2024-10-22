#include <iostream>

using namespace std;

int main() {

    for(int i=100; i>=1; i/=2) {
        cout << i << " ";
    }
    
    return 0;
}

// print numbers from 100, where each successive ineger is divided by 2