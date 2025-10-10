// hex_oct_2.cpp -- display values in hex and octal

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    // manipulator for changing number base
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    // manipulator for changing number base
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return EXIT_SUCCESS;
}
