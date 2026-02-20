// twofile2.cpp -- variables with internal and external linkage

#include <iostream>
// tom defined elsewhere
extern int tom;
// overrides external dick
static int dick = 10;
// external variable definition, no conflict with twofile1 harry
int harry = 200;

void remote_access()
{
    using namespace std; 

    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}
