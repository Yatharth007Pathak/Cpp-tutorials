#include <iostream>

using namespace std;

int main() {

    int x[5] = {1, 2, 3, 4, 5};

    for(int i=4; i>=0; i--) {
        cout << x[i] << " ";
    }

    return 0;
}

// print the elements of an array in reverse order

/*
break down the given C++ code:-

#include <iostream>
This line includes the iostream library, which is necessary for input and output operations in C++.

using namespace std;
This line allows us to use names from the standard library (std) without needing to prefix them with "std::".

int main() {
This line declares the main function, which is the entry point of a C++ program. The execution of the program begins here.


int x[5] = {1, 2, 3, 4, 5};
This line declares and initializes an array named x of type int with 5 elements. 
The elements of the array are initialized to 1, 2, 3, 4, and 5 respectively.

for(int i=4; i>=0; i--) {
    cout << x[i] << " ";
}
This is a for loop that runs from i = 4 to i = 0 (inclusive), iterating 5 times. 
In each iteration, the loop prints the i-th element of the array x followed by a space.

for(int i=4; i>=0; i--) initializes i to 4 and decrements it in each iteration until i is no longer greater than or equal to 0.
cout << x[i] << " "; prints the i-th element of the array followed by a space.

return 0;
}
This line indicates that the main function returns an integer value of 0, signaling that the program has executed successfully.
*/