#include <iostream>

using namespace std;

int main() {

    int arr[] = {5,8,3,7,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=n-1; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int product = 1;
    for(int i=0; i<=n-1; i++) {
        product *= arr[i];
    }
    cout << product;

    return 0;
}

// calculate the product of all the elements in the given array