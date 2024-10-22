#include <iostream>

using namespace std;

void passByReference(int &a) {
    a = 10;                                                                    // Change is made to the original parameter
    return;
}

int main() {

    int x = 5;
    passByReference(x);                                                        // Pass by reference

    cout << "x after passByReference: " << x << endl;                          // x is now 10

    return 0;
}

// pass by reference function

/*
The function passByReference receives a reference to x.
Changes to a inside the function directly affect x.
The original value of x is modified to 10.
*/

/*
break down the provided C++ code:

#include <iostream>
This line includes the input-output stream library, which is necessary for using cout for output.

using namespace std;
This line allows the program to use all the elements in the std namespace without prefixing them with std::. 
For example, cout is used instead of std::cout.

void passByReference(int &a) {
    a = 10; 
}
This is a function definition for passByReference, which takes an integer reference a as a parameter. Inside the function, 
the value of a is modified to 10. Since a is a reference, changes made to it affect the original variable passed to the function.

int main() {
This is the main function where the execution of the program begins.

int x = 5;
An integer variable x is declared and initialized with the value 5.

passByReference(x);
The function passByReference is called with x as an argument. Since passByReference takes its parameter by reference, 
any modifications made to a inside the function will directly affect the original variable x.

cout << "x after passByReference: " << x << endl;
The current value of x is printed after the function call. 
Since passByReference modifies the original variable x to 10, the printed value will be 10.

return 0;
The main function returns 0, indicating that the program has executed successfully.

}
End of the main function.
*/