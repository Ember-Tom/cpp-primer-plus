// twofile1.cpp -- variables with external and internal linkage
// to be compiled with two file2.cpp
#include <iostream>
// external variable definition
int tom = 3;
// external variable definition
int dick = 30;
// static, internal linkage
static int harry = 300;

// function prototype
void remote_access();

int main(int argc, const char **argv)
{
    using namespace std;

    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";

    remote_access();

    return EXIT_SUCCESS;
}
