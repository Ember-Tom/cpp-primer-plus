// inline.cpp -- using an inline function

#include <iostream>

// an inline function definition
inline double square(double x) { return x * x; }

int main(int argc, char **argv)
{
    using namespace std;

    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c;
    cout << ", c square = " << square(c++) << "\n";
    cout << "now c = " << c << endl;

    return EXIT_SUCCESS;
}