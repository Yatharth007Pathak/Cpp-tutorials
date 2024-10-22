#include <iostream>

using namespace std;

int main() {

    string s = "cow is an animal with four legs";
    cout << s << endl;


    int n = s.length();
    for(int i=0; i<n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    int count = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }

    cout << count;

    return 0;
}

// input a string of length n and count all the vowels in the given string