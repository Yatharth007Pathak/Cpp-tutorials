#include <iostream>

using namespace std;

int main() {

    int arr[] = {15,28,53,47,19,22,63,54,97};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=n-1; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int mx = arr[0];
    for(int i=0; i<=n-1; i++) {
        if(arr[i]>mx) {
            mx = arr[i];
        }
    }

    int Smx = arr[0];
    for(int i=0; i<=n-1; i++) {
        if(arr[i] != mx) {
            Smx = max(Smx,arr[i]);
        }
    }
    cout << Smx;

    return 0;
}

// Find the second largest element in the given array