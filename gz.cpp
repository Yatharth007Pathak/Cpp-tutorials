#include <iostream>

using namespace std;

// Function to pass an integer by value
void passByValue(int a) {
    a = 10;                                                       // Change is made to the local copy of the parameter
    return;
}

// Function to pass an integer by reference
void passByReference(int &a) {
    a = 10;                                                       // Change is made to the original parameter
    return;
}

int main() {

    int x = 5;
    
    // Calling the function with pass by value
    cout << "Before passByValue: x = " << x << endl;
    passByValue(x);
    cout << "After passByValue: x = " << x << endl;

    cout << endl;

    // Calling the function with pass by reference
    cout << "Before passByReference: x = " << x << endl;
    passByReference(x);
    cout << "After passByReference: x = " << x << endl;
    
    return 0;
}


/*
In programming, particularly in languages like C++, the concepts of passing arguments to functions 
"by value" and "by reference" are crucial for understanding how data is manipulated within functions. 
Here's an explanation of both:

Pass by Value
When an argument is passed by value, a copy of the actual parameter's value is made in memory. 
The function operates on this copy, and any changes made to the parameter inside the function do not affect the original value.

Pass by Reference
When an argument is passed by reference, the function receives a reference (or alias) to the actual parameter. 
Any changes made to the parameter inside the function affect the original value.
*/

/*
Key Differences

Memory Usage:
Pass by Value: Uses more memory as a copy of the variable is created.
Pass by Reference: Uses less memory since no copy is made; only a reference to the original variable is passed.

Performance:
Pass by Value: Generally slower due to the overhead of copying data.
Pass by Reference: Faster since no data copying is involved, only the reference is passed.

Side Effects:
Pass by Value: Changes made to the parameter inside the function do not affect the original variable.
Pass by Reference: Changes made to the parameter inside the function do affect the original variable.

Practical Use
Pass by Value: Preferred when you do not want the function to modify the original data, ensuring data integrity.
Pass by Reference: Preferred when you need the function to modify the original data or when passing 
large data structures to avoid the overhead of copying.

Summary
Pass by Value: A copy of the variable is passed, changes do not affect the original variable.
Pass by Reference: A reference to the variable is passed, changes do affect the original variable.
*/