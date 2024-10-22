#include <iostream>

using namespace std;

int main() {
    
    // Initialize string y with the value "yatharth"
    string y = "yatharth";
    cout << y << endl;  // Print the original string y

    // Get the length of string y
    int n = y.length();
    int i = 0;
    int j = n / 2 - 1;

    // Reverse the first half of the string y
    while (i < j) {
        char temp = y[i];
        y[i] = y[j];
        y[j] = temp;
        i++;
        j--;
    }
    cout << "reverse the first half of the string : " << y << endl;

    // Initialize string x with the value "pathak"
    string x = "pathak";
    cout << x << endl;  // Print the original string x

    // Get the length of string x
    int m = x.length();
    int u = 0;
    int v = m - 1;

    // Reverse the entire string x
    while (u < v) {
        char temp = x[u];
        x[u] = x[v];
        x[v] = temp;
        u++;
        v--;
    }
    cout << "reverse the complete string : " << x << endl;

    return 0;  // Return 0 to indicate successful execution
}


// input a string of even length and reverse the first half of the string and also reverse complete string