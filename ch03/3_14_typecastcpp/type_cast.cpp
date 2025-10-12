// type_cast.cpp -- forcing type changes

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int auks, bats, coots;

    // the following statement adds the values as double,
    // then convert the result to int 
    auks = 19.99 + 11.99;

    // these statements add values as int
    // old C syntax 
    bats = (int) 19.99 + (int) 11.99;
    // new C++ syntax
    coots = int (19.99) + int (11.99);

    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';

    // print as char 
    cout << "The code for " << ch << " is ";
    // print as int 
    cout << int (ch) << endl;
    cout << "Yes, the code is ";
    // using static_cast
    cout << static_cast<int>(ch) << endl;

    return EXIT_SUCCESS;
}