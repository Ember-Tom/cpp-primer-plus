// plus_one.cpp -- the increment operator

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int a = 20;
    int b = 20;

    cout << "a= " << a << ":b = " << b << "\n";
    cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout << "a= " << a << ":b = " << b << "\n";

    return EXIT_SUCCESS;
}