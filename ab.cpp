#include <iostream>

using namespace std;

int main() {
    cout << "Om Namo Narayan";
    
    return 0;
}

// We can use the "using namespace std;" directive to avoid prefixing std:: before standard library elements

/*
break down the code step by step:

#include <iostream>
This line includes the iostream header file, which provides input/output stream functionality in C++. 
It allows us to use objects like std::cout for output and std::cin for input.

using namespace std;
This line declares that we're using the std namespace throughout the code. 
The std namespace contains many standard C++ functions, classes, and objects, including cout and endl.

int main() {
This line defines the main function, which serves as the entry point of the program. Execution of the program starts from here.

cout << "Om Namo Narayan";
This line uses the cout object, which is part of the std namespace and allows us to perform output to the standard output stream. 
Here, it prints the string "Om Namo Narayan" to the console.

return 0;
This line indicates that the program has executed successfully and returns a status code of 0 to the operating system.
This conventionally means that the program terminated without any errors.


}
This closing brace marks the end of the main function.
*/