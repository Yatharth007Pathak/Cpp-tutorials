#include <iostream>

using namespace std;

int main() {

    int arr[2][3];

    arr[0][0] = 6;
    arr[0][1] = 3;
    arr[0][2] = 7;
    arr[1][0] = 1;
    arr[1][1] = 9;
    arr[1][2] = 4;

    for( int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 2D Arrays