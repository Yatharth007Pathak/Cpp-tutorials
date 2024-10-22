#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    int r;
    cout << "enter r : ";
    cin >> r;

    int a = 1;
    for(int i=1; i<=n; i++) {
        a *= i;
    }
    cout << a << endl;

    int b = 1;
    for(int i=1; i<=r; i++) {
        b *= i;
    }
    cout << b << endl;

    int c = 1;
    for(int i=1; i<=n-r; i++) {
        c *= i;
    }
    cout << c << endl;

    cout << "combination is : " << a/(b*c);

    return 0;
}

// combination of two numbers

/*
breakdown of the entire C++ code:

Include Directive:
This line includes the input-output stream library (iostream), necessary for using cin and cout.

Namespace Declaration:
using namespace std; allows using names from the standard namespace without explicitly qualifying them.

Main Function:
int main() { defines the entry point of the program.

Variable Declaration and Input for n:
int n; declares an integer variable n.
cout << "enter n : "; prompts the user to enter a value for n.
cin >> n; reads the user input and stores it in the variable n.

Variable Declaration and Input for r:
int r; declares an integer variable r.
cout << "enter r : "; prompts the user to enter a value for r.
cin >> r; reads the user input and stores it in the variable r.

Factorial Calculation for n:
int a = 1; initializes an integer a to 1.
for(int i=1; i<=n; i++) { a *= i; } calculates the factorial of n (i.e., n!) and stores it in a.
cout << a << endl; outputs the value of a.

Factorial Calculation for r:
int b = 1; initializes an integer b to 1.
for(int i=1; i<=r; i++) { b *= i; } calculates the factorial of r (i.e., r!) and stores it in b.
cout << b << endl; outputs the value of b.

Factorial Calculation for (n-r):
int c = 1; initializes an integer c to 1.
for(int i=1; i<=n-r; i++) { c *= i; } calculates the factorial of n-r (i.e., (n-r)!) and stores it in c.
cout << c << endl; outputs the value of c.

Combination Calculation and Output:
cout << "combination is : " << a/(b*c); calculates the combination C(n, r) using the formula n!/(r!*(n-r)!) and outputs the result.

End of Main Function:
return 0; indicates that the program has executed successfully.
*/