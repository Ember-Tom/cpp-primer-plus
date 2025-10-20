// array_new.cpp -- using the new operator for arrays

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // space for 3 doubles
    double * p3 = new double[3];
    // treat p3 like an array name
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    // increment the pointer
    p3 = p3 + 1;

    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";

    // point back to beginning
    p3 = p3 - 1;
    // free the memory
    delete [] p3;
    
    return EXIT_SUCCESS;
}