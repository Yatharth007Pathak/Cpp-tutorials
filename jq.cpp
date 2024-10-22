#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string y ="abcdefg";
    cout << y << endl;
    int n = y.length();

    reverse(y.begin()+1,y.begin()+5);
    cout << y << endl;

    return 0;
}

// input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions