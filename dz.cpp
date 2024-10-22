#include <iostream>

using namespace std;

int main() {

    char Letter = 'A'; 
    cout << "\n Uppercase Letters and their ASCII values:" << endl;
    while (Letter <= 'Z') {
        cout << "ASCII value of " << Letter << " = " << (float)Letter << endl;
        Letter++;
    }

    char letter = 'a'; 
    cout << "\n Lowercase letters and their ASCII values:" << endl;
    while (letter <= 'z') {
        cout << "ASCII value of " << letter << " = " << (float)letter << endl;
        letter++;
    }
   
    return 0;
}

// print all the ASCII values and their equivalent chracters of 26 alphabets using a while loop

/*
This C++ program prints the ASCII values of uppercase and lowercase letters from 'A' to 'Z' and 'a' to 'z' respectively. Here's how it works:

#include <iostream>: This line includes the input-output stream library, necessary for input and output operations.

using namespace std;: This line allows the use of objects and functions from the std namespace without prepending std:: to each one.

int main() { ... }: This is the main function where the program execution begins. 
It returns an integer value indicating the exit status of the program.

char Letter = 'A';: Declares a character variable Letter and initializes it with the character 'A'. 
This variable will be used to iterate over uppercase letters.

cout << "\n Uppercase Letters and their ASCII values:" << endl;: Outputs a message indicating that the following lines 
will display uppercase letters and their ASCII values.

while (Letter <= 'Z') { ... }: Starts a while loop that continues as long as Letter is less than or equal to 'Z'. 
This loop iterates over uppercase letters from 'A' to 'Z'.

cout << "ASCII value of " << Letter << " = " << (float)Letter << endl;: Displays the ASCII value of the current 
uppercase letter along with the letter itself.

Letter++;: Increments the value of Letter to move to the next uppercase letter.

char letter = 'a';: Declares a character variable letter and initializes it with the character 'a'. 
This variable will be used to iterate over lowercase letters.

cout << "\n Lowercase letters and their ASCII values:" << endl;: Outputs a message indicating that the following lines
 will display lowercase letters and their ASCII values.

while (letter <= 'z') { ... }: Starts a while loop that continues as long as letter is less than or equal to 'z'. 
This loop iterates over lowercase letters from 'a' to 'z'.

cout << "ASCII value of " << letter << " = " << (float)letter << endl;: Displays the ASCII value of the current 
lowercase letter along with the letter itself.

letter++;: Increments the value of letter to move to the next lowercase letter.

return 0;: Indicates successful termination of the program.
*/