#include <iostream>

using namespace std;

int main() {

    int arr[2][3] = {6,3,7,1,9,4};

    cout << "2*3 matrix is" << endl;
    for( int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "transpose of 2*3 matrix is" << endl;
    for( int j=0; j<3; j++) {
        for(int i=0; i<2; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// taking transpose of a 2D array