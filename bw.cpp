#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter marks : ";
    cin >> n;

    if(n>=81 && n<=100) {
        cout << "very good";
    }
    else if(n>=61) {
        cout << "good";
    }
    else if(n>=41) {
        cout << "average";
    }
    else {
        cout << "fail";
    }
    

    return 0;
}



/*
take input percentage of a student and print the grade according to marks:
81-100 very good
61-80 good
41-60 average
<=40 fail
*/