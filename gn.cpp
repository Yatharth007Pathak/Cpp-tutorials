#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int arr[] = {3, 1, 4, 1, 5};
    sort(arr, arr + 5);
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Utility Functions