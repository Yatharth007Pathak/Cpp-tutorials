#include <iostream>

using namespace std;

inline int square(int x) {                                                         // Function declaration
    return x * x;
}
int main() {

    cout << "Square of 5: " << square(5) << endl;                                  // Function call
    
    return 0;
}



/*
Inline functions in C++ are a special type of function where the compiler is instructed to insert the function's body 
directly into the place where the function is called, rather than performing the normal function call mechanism.
This can improve the performance of small, frequently called functions by eliminating the overhead of a function call.
*/

/*
Characteristics of Inline Functions
Keyword inline:
The inline keyword is used to suggest to the compiler that the function should be expanded in-line where it is called.

Reduced Overhead:
Inline functions reduce the function call overhead by embedding the function code at each point of call,
 avoiding the overhead of stack operations and jumps.
This can lead to faster execution, especially for small functions.

Usage Constraints:
The compiler can ignore the inline request if the function is too complex or if inlining would not result in performance benefits.
Functions defined inside class definitions are implicitly inline.

Suitability:
Inline functions are most suitable for small, frequently called functions.
Large functions or functions with loops and complex control structures are generally not suitable for inlining.
*/