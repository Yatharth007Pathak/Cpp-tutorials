#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float num = 64.0;
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    cout << "Cube root of " << num << " is " << cbrt(num) << endl;

    cout << "Minimum (4,8) is" << min(4,8) << endl;
    cout << "Maximum (4,8) is" << max(4,8) << endl;

    cout << "2 raised to the power 3 is " << pow(2, 3) << endl;
    cout << "Absolute value of -10 is " << abs(-10) << endl;

    double value = 100.0;
    cout << "Natural logarithm (ln) of " << value << " is " << log(value) << endl;
    cout << "Common logarithm (log10) of " << value << " is " << log10(value) << endl;

    cout << "Exponential of " << num << " is " << exp(num) << endl;

    double angle = 45.0;
    double radians = angle * M_PI / 180.0;  // Convert angle to radians

    cout << "Sine of " << angle << " degrees is " << sin(radians) << endl;
    cout << "Cosine of " << angle << " degrees is " << cos(radians) << endl;
    cout << "Tangent of " << angle << " degrees is " << tan(radians) << endl;
    
    cout << "Hyperbolic sine of " << radians << " is " << sinh(radians) << endl;
    cout << "Hyperbolic cosine of " << radians << " is " << cosh(radians) << endl;
    cout << "Hyperbolic tangent of " << radians << " is " << tanh(radians) << endl;

    return 0;
}

// This program showcases a variety of mathematical functions available in the C++ Standard Library. 