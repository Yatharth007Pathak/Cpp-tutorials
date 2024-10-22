#include <iostream>

using namespace std;

int main() {

    int arr[5];

    cout << "enter array elements : ";
    for(int i=0; i<=4; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<=4; i++) {
        cout << arr[i]*2 << " ";
    }

    return 0;
}

/*
break down the given C++ code 

#include <iostream>
This line includes the iostream library, which is necessary for input and output operations in C++.

using namespace std;
This line allows us to use names from the standard library (std) without needing to prefix them with "std::".

int main() {
This line declares the main function, which is the entry point of a C++ program. The execution of the program begins here.

int arr[5];
This line declares an array named arr of type int with 5 elements. The elements of the array are uninitialized at this point.

cout << "enter array elements : ";
This line prints the message "enter array elements : " to the standard output.

for(int i=0; i<=4; i++) {
    cin >> arr[i];
}
This is a for loop that runs from i = 0 to i = 4 (inclusive), iterating 5 times. 
In each iteration, the loop reads an integer from the standard input and stores it in the i-th element of the array arr.



for(int i=0; i<=4; i++) {
    cout << arr[i]*2 << " ";
}
This is another for loop that also runs from i = 0 to i = 4 (inclusive), iterating 5 times. 
In each iteration, the loop doubles the value of the i-th element of the array arr and prints it, followed by a space.

return 0;
}
This line indicates that the main function returns an integer value of 0, signaling that the program has executed successfully.
*/