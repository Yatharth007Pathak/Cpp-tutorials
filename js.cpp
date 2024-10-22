#include <iostream>

using namespace std;

int main() {

    int x = 123456789;
    string s = to_string(x);

    cout << "total number of digits in a number : ";
    cout << s.length();


    return 0;
}

// return the total number of digits in a number without using any loop