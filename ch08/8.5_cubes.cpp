// cubes.cpp -- regular and reference arguments

#include <iostream>

double cube(double a);
double refcube(double &ra);
double ref_cube(const double &ra);

int main(int argc, char **argv)
{
    using namespace std;

    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;

    long y = 3;

    cout << ref_cube(y);
    cout << " = cube of " << y << endl;

    cout << ref_cube(x + y);
    cout << " = cube of " << (x + y) << endl;

    cout << ref_cube(x + 1.0);
    cout << " = cube of " << (x + 1.0) << endl;

    cout << ref_cube(5.0);
    cout << " = cube of " << 5.0 << endl;

    return EXIT_SUCCESS;
}

double cube(double a)
{
    a *= a * a;

    return a;
}

double refcube(double &ra)
{
    ra *= ra * ra;

    return ra;
}

double ref_cube(const double &ra)
{
    return (ra * ra * ra);
}

// 作为引用变量传参时，直接对引用操作，会改变原数值，若不想改变原数值，添加const即可