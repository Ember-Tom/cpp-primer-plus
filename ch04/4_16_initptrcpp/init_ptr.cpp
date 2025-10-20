// init_ptr.cpp -- initialize a pointer

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int higgens = 5;
    int * pt = &higgens;

    cout << "Value of higgens = " << higgens
         << "; Address of higgen = " << &higgens << endl;
    cout << "Value of *p = " << *pt
         << "; Value of pt = " << pt << endl;

    return EXIT_SUCCESS;
}