#include <iostream>

using namespace std;

void passByValue(int a) {
    a = 10;                                                                    // Change is made to the local copy of the parameter
    return;
}

int main() {

    int x = 5;
    passByValue(x);                                                            // Pass by value

    cout << "x after passByValue: " << x << endl;                              // x remains 5

    return 0;
}

// pass by value function

/*
The function passByValue receives a copy of x.
Changes to a inside the function do not affect x in the main function.
The original value of x remains unchanged.
*/

/*
break down of C++ code:

#include <iostream>
This line includes the input-output stream library, which is necessary for using cout for output.

using namespace std;
This line allows the program to use all the elements in the std namespace without prefixing them with std::. 
For example, cout is used instead of std::cout.

void passByValue(int a) {
    a = 10;  
}
This is a function definition for passByValue, which takes an integer parameter a. 
Inside the function, a is assigned the value 10. However, this change only affects the local copy of a.

int main() {
This is the main function where the execution of the program begins.

int x = 5;
An integer variable x is declared and initialized with the value 5.

passByValue(x);
The function passByValue is called with x as an argument. Since C++ uses pass by value by default, a copy of x is passed to the function.

cout << "x after passByValue: " << x << endl;
The current value of x is printed after the function call. Since passByValue operates on a copy of x, the original value of x remains unchanged.

return 0;
The main function returns 0, indicating that the program has executed successfully.

}
End of the main function.
*/