#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter n : ";
    cin >> n;

    (n%2==0) ? cout << "even number" : cout << "odd number";    

    return 0;
}

// program to find whether entered number is odd or even using ternary operator

/*
the ternary operator, also known as the conditional operator, is a concise way to write conditional expressions in many programming languages

Its syntax in C++ is:
condition ? expression_if_true : expression_if_false

Here, condition is evaluated first. If it's true, expression_if_true is evaluated and becomes the value of the entire expression. 
If condition is false, expression_if_false is evaluated and becomes the value of the entire expression.
*/