#include <iostream>

using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
    return;
}

int main() {

    greet();                // Uses default value "Guest"
    greet("Alice");         // Uses provided value "Alice"

    return 0;
}

// Default Parameters: Parameters that have a default value if no argument is provided.