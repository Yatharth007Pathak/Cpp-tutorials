#include <iostream>

using namespace std;

int main() {

    float x, y;

    // Input coordinates
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    // Check if point is at the origin
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin (0,0)" << endl;
    }
    // Check if point lies on x-axis
    else if (y == 0) {
        cout << "The point lies on the x-axis" << endl;
    }
    // Check if point lies on y-axis
    else if (x == 0) {
        cout << "The point lies on the y-axis" << endl;
    }
    else {
        // Determine quadrant
        if (x > 0 && y > 0) {
            cout << "The point lies in the 1st quadrant" << endl;
        } else if (x < 0 && y > 0) {
            cout << "The point lies in the 2nd quadrant" << endl;
        } else if (x < 0 && y < 0) {
            cout << "The point lies in the 3rd quadrant" << endl;
        } else {
            cout << "The point lies in the 4th quadrant" << endl;
        }
    }

    return 0;
}

/*
given a point (x,y), write a program to find out if it lies in the 1st quadrant, 2nd quadrant, 
3rd quadrant, 4th quadrant, on the x-axis, y-axis or at the origin, viz. (0,0).
*/