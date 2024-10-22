#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter the number : ";
    cin >> n;

    bool flag = true;                          // true means prime

    for(int i=2; i<=n-1; i++) {
        if(n%i==0) {
            flag = false;                      // false means composite
            break;                             // to get out of the loop
        }
    }

    if(n==1) {
        cout << "neither prime nor composite";
    }
    else if(flag == true) {
        cout << "prime number";
    }
    else {
        cout << "composite number";
    }
    
    return 0;
}

// program to check if a number is prime or not

/*
In C++, a Boolean is a built-in data type used to represent truth values: true and false. 
Here are the key points about Booleans in C++:

Boolean Type: The keyword bool is used to declare Boolean variables. 
The bool type can hold one of two values: true or false.

Boolean Literals: The keywords true and false are the Boolean literals in C++. 
true evaluates to 1, and false evaluates to 0 when used in arithmetic operations.

Declaration and Initialization:
bool isRaining = true;                        Boolean variable with value true
bool hasUmbrella = false;                     Boolean variable with value false

Boolean Expressions: Boolean variables are commonly used in expressions, 
particularly in control flow statements like if, while, and for.

if (isRaining) {
    cout << "Take an umbrella!" << endl;
}

while (hasUmbrella) {
    cout << "You are prepared for the rain." << endl;
    hasUmbrella = false; // Changing the value to stop the loop
}

Logical Operators: C++ supports logical operators that return Boolean values.
AND (&&): True if both operands are true.
OR (||): True if at least one operand is true.
NOT (!): Inverts the Boolean value.
bool a = true;
bool b = false;
bool result;

result = a && b;                 result is false
result = a || b;                 result is true
result = !a;                     result is false

Comparison Operators: These operators return Boolean values based on the comparison of two values.
Equal to (==)
Not equal to (!=)
Greater than (>)
Less than (<)
Greater than or equal to (>=)
Less than or equal to (<=)
int x = 10;
int y = 20;
bool comparisonResult;

comparisonResult = (x == y);            false
comparisonResult = (x != y);            true
comparisonResult = (x < y);             true
comparisonResult = (x >= y);            false

Type Conversion: In C++, non-zero numeric values are converted to true, 
and zero is converted to false when assigned to a Boolean variable.

bool b1 = 42;              b1 is true
bool b2 = 0;               b2 is false
*/