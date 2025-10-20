// use_new.cpp -- using the new operator

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int nights = 1001;
    // allocate space for an int
    int * pt = new int;
    // stone a value there
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    // allocate space for a double
    double * pd = new double;
    // store a double there
    *pd = 10000001.0;

    cout << "double ";
    cout << "value = " << *pd << ": loaction = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof (pt);
    cout << ": size of *pt = " << sizeof (*pt) << endl;
    cout << "size of pd = " << sizeof (pd);
    cout << ": size of *pd = " << sizeof (*pd) << endl;

    return EXIT_SUCCESS;
}