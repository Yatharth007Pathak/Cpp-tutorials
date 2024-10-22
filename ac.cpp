#include <iostream>

int main() {
    std::cout << "Har Har Mahadev" << std::endl;
    std::cout << "Jai Shree Ram";
    
    return 0;
}

/*
this C++ program prints "Har Har Mahadev" followed by a newline, 
and then "Jai Shree Ram" without a newline. Finally, it returns 0 to indicate successful execution.
*/



/*
break down this C++ code:

#include <iostream>
This line includes the iostream header file, which provides input/output stream functionality in C++. 
It allows us to use objects like std::cout for output and std::endl for inserting a newline into the output stream.

int main() {
This line defines the main function, which serves as the entry point of the program. Execution of the program starts from here.

std::cout << "Har Har Mahadev" << std::endl;
This line uses the std::cout object to print the string "Har Har Mahadev" to the standard output stream (usually the console). 
The << operator is used to concatenate multiple items to be outputted, 
and std::endl is used to insert a newline into the output stream after printing the string.

std::cout << "Jai Shree Ram";
This line uses std::cout again to print the string "Jai Shree Ram" to the standard output stream. 
Since there is no std::endl after this string, the next output will start from the same line without inserting a newline.

return 0;
This line indicates that the program has executed successfully and returns a status code of 0 to the operating system. 
This conventionally means that the program terminated without any errors.

}
This closing brace marks the end of the main function.
*/