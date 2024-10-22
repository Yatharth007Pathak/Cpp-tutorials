#include <iostream>

using namespace std;

int main() {

    int cp;
    cout << "enter cost price : ";
    cin >> cp;

    int sp;
    cout << "enter selling price : ";
    cin >> sp;

    if(sp>cp) {
        cout << "profit is " << sp-cp;
    }
    else if(sp<cp) {
        cout << "loss is " << cp-sp;
    }
    else {
        cout << "no profit no loss";
    }
    
    

    return 0;
}


/*
if cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller 
has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred
*/