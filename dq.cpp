#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "enter a number : ";
    cin >> n;

    int count = 0;

    while (n!=0) {
        n = n/10;
        count++;
    }

    cout << count;    

    return 0;
}

// program to count digits of a given number

/*
break down the code step by step:

Header Inclusion: The code starts with #include <iostream>, which is a preprocessor directive that includes 
the necessary header file for input and output operations in C++.

Namespace Usage: The line using namespace std; indicates that the code is using the standard namespace, 
which allows us to use names for objects and variables from the standard C++ library without explicitly qualifying them with std::.

Main Function: The main() function is the entry point of the program, where the execution begins.

Variable Declaration:
int n;: This declares an integer variable named n without initializing it.
int count = 0;: This declares an integer variable named count and initializes it to 0. 
This variable will be used to count the number of digits in the input number.

User Input: cout << "enter a number : "; prints a message asking the user to enter a number. 
cin >> n; reads an integer input from the user and stores it in the variable n.

Counting Digits:
while (n != 0) { ... }: This is a while loop that continues as long as n is not equal to 0.
n = n / 10;: Inside the loop, n is divided by 10 in each iteration. This effectively removes the last digit from n.
count++;: With each iteration of the loop, the count variable is incremented to keep track of the number of digits.
Printing Result: After the while loop terminates (when n becomes 0), the program prints out the value of count using cout << count;.

Return Statement: Finally, return 0; indicates that the program has executed successfully and returns 0 to the operating system.
*/