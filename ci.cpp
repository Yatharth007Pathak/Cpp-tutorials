#include <iostream>

using namespace std;

int main() {

     for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    
    return 0;
}

//  print all combinations of i and j from 0 to 2 using nested loop

/*
Nested loops are loops within loops. This means we place one loop inside the body of another loop. 
The inner loop is executed completely for every iteration of the outer loop. Nested loops are useful when dealing 
with multi-dimensional data structures, such as matrices, or when we need to perform complex iterations over multiple variables.
*/