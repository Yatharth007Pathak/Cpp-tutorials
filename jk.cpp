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

    for(int i=0; i<n; i++) {
        if(i%2 == 0) {
            s[i] = 'a';
        }
        }

        for(int i=0; i<n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;    

    return 0;
}

// input a string of length n and update all the even even positions in the string to character 'a'. consider 0-based indexing