#include <iostream>

using namespace std;

int add(int a, int b);                                   // Function declaration

int main() {

    int num1, num2, sum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = add(num1, num2);                               // Function call

    cout << "Sum: " << sum << endl;

    return 0;
}

int add(int a, int b) {                                  // Function definition
    return a + b;
}

/*
Code Breakdown

Function Declaration
int add(int a, int b);
This line is a function declaration (also called a function prototype). 
It tells the compiler that there is a function named add which takes two integer parameters (a and b) and returns an integer. 
This allows the function to be used before its actual definition appears in the code.

Main Function
int main() {
This is the beginning of the main function, which is the entry point of every C++ program. 
When the program runs, it starts executing from this function.

int num1, num2, sum;
Here, three integer variables are declared: num1, num2, and sum. 
These will be used to store the numbers entered by the user and their sum, respectively.

cout << "Enter two numbers: ";
cin >> num1 >> num2;
cout is used to display the message "Enter two numbers: " on the screen.
cin is used to read two integers from the user and store them in num1 and num2.

sum = add(num1, num2);
This line calls the add function, passing num1 and num2 as arguments. 
The function computes the sum of these two numbers and returns the result, which is then stored in the variable sum.

cout << "Sum: " << sum << endl;
This line prints the value of sum to the screen, displaying the computed sum.

return 0;
This line returns 0, indicating that the program has finished executing successfully.

}
This marks the end of the main function.

Function Definition
int add(int a, int b) {
This is the beginning of the definition of the add function. 
It specifies what the function actually does. The function takes two integer parameters, a and b.

return a + b;
This line adds the two parameters a and b and returns their sum.

}
This marks the end of the add function.
*/