#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float p=1000, r=5, t=2;
    float ci = p * pow((1 + r/ 100), t);
    cout << "compound interest is :";
    cout << ci;

    return 0;
}

// calculating compound interest



/*
variable naming rules :-
variables can start from an alphabet or underscore _ or $
variable names can consist of letters (both uppercase and lowercase), digits
special characters except _ and $ are not allowed in variable naming
variable names cannot be the same as C++ keywords (reserved words) 
commas or blanks are not allowed in variable names

Here are some examples of valid variable names:
age
totalScore
DoublE
num_of_students
_myVar
myVariable
FLOAT

And some invalid variable names:
123variable (starts with a digit)
my variable (contains space)
#mean (contains special character)
double (keyword)
if (keyword)
group. (contains special character)
total-Sum (contains hyphen)
*/

/*
The exact number of keywords may vary slightly depending on the C++ standard (such as C++98, C++11, C++14, C++17, C++20, etc.), 
but typically, the total number of keywords in C++ is around 80 to 90.
*/