#include <iostream>

using namespace std;

void usa() {                                                // Function definition
    cout << "you are in usa" << endl;
    return;
}

void india() {                                              // Function definition
    cout << "you are in india" << endl;
    usa();
    return;
}

int main() {

    cout << "you are in main" << endl;
    india();                                                // Function call
    
    return 0;
}

/*
breakdown of the modified C++ code:

Include the necessary library:
#include <iostream>
This line includes the input-output stream library, which allows the program to perform input and output operations, 
such as printing to the console.

Use the standard namespace:
using namespace std;
This line tells the compiler to use the standard namespace. 
This avoids the need to prefix standard library objects and functions with std::.

Define the usa function:
void usa() {
    cout << "you are in usa" << endl;
    return;
}
This is the definition of a function named usa that takes no parameters.
Inside the function, the cout statement prints "you are in usa" followed by a newline to the console.
The return statement indicates the end of the function. Since the function's return type is void, it does not return any value.

Define the india function:
void india() {
    cout << "you are in india" << endl;
    usa();
    return;
}
This is the definition of a function named india that takes no parameters.
Inside the function, the cout statement prints "you are in india" followed by a newline to the console.
The usa function is called within the india function. This means after printing "you are in india", the program will execute the usa function, printing "you are in usa".
The return statement indicates the end of the function. Since the function's return type is void, it does not return any value.

Define the main function:
int main() {
    cout << "you are in main" << endl;
    india();
    return 0;
}
The main function is the entry point of the program.
It prints "you are in main" followed by a newline to the console.
It calls the india function, which prints "you are in india" and then calls the usa function, which prints "you are in usa".
Finally, it returns 0, indicating that the program has executed successfully.
*/