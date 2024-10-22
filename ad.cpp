#include <iostream>

using namespace std;

int main() {
    cout << "Har Har Mahadev" << endl;
    cout << "Jai Shree Ram";
    return 0;
}


/*
"using namespace std;" directive allows us to directly use elements from the std namespace without prefixing them with std::
 So, cout and endl can be used directly without prefixing std::
*/

/*
Explanation:

#include <iostream>: This line includes the standard input-output stream library, 
which allows us to perform input and output operations in C++.

using namespace std;: This line is a directive that tells the compiler to use the std namespace. 
The std namespace contains many standard C++ functions and objects, including those for input and output operations.

int main() { ... }: This is the main function of the program, where the execution of the program begins. 
In C++, every program must have a main() function, and the execution of the program starts from the beginning of this function.

cout << "Har Har Mahadev" << endl;: This line uses the cout object, which is part of the std namespace and is used for outputting data. 
It prints the string "Har Har Mahadev" to the standard output (usually the console) followed by a newline (endl).

cout << "Jai Shree Ram";: This line also uses cout to print the string "Jai Shree Ram" to the standard output. 
However, it does not append a newline after the string, so any subsequent output will be on the same line.

return 0;: This statement is used to exit the main() function and return a value of 0 to the operating system. 
In C++, returning 0 from main() typically indicates that the program executed successfully.
*/


/*
cout << "Har Har Mahadev" << endl;
This line outputs the string "Har Har Mahadev" to the standard output (usually the console) using the cout object. 
The << operator is used for output. endl is a special manipulator that inserts a newline character into the 
output stream and flushes the buffer, ensuring that the output is immediately visible.

cout << "Jai Shree Ram";
This line outputs the string "Jai Shree Ram" to the standard output without inserting a newline after it. 
Therefore, "Jai Shree Ram" will appear immediately after "Har Har Mahadev" in the output.
*/