#include <iostream>

using namespace std;

int main() {

    int arr[] = {15,28,53,47,19,22,63,54,97};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=n-1; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int mn = arr[0];
    for(int i=0; i<=n-1; i++) {
        mn = min(mn,arr[i]);
        
    }
    cout << mn;

    return 0;
}

/*
inside for loop we can also use 
if(arr[i]<mn) {
    mn = arr[i];
}
*/ 

// find the minimum value out of all the elements in the array