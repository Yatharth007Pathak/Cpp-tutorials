#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    vector<int> numbers = {1, 4, 9, 16, 25};
    
    // Calculate the square root of each number and sort them

    transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) { return sqrt(n); });
    sort(numbers.begin(), numbers.end());
    
    cout << "Sorted square roots: ";
    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*
This example  demonstrates the use of <vector>, <algorithm>, and <cmath> 
to manipulate a list of numbers by calculating their square roots and then sorting the results.
*/