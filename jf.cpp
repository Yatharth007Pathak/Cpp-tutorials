#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char source[] = "yatharth";
    char destination[50];

    strcpy(destination, source);                                   // Copy source to destination
    cout << "Destination after copy: " << destination << endl;

    return 0;
}

// Copying One Character Array to Another