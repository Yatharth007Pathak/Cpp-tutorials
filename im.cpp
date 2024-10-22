#include <iostream>

using namespace std;

int main() {

    int arr[4][2] = {{5,76},{8,46},{1,90},{3,83}};

    for( int i=0; i<4; i++) {
        for(int j=0; j<2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// program to store roll number and marks obtained by 4 students side by side in a matrix