// hex_oct1.cpp -- shows hex and octal literals

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // decimal integer literal
    int chest = 42;

    //hexadecimal integer literal
    int waist = 0x42;

    // octal integer literal
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";

    return EXIT_SUCCESS;
}