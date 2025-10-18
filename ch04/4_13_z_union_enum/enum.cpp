// enum.cpp -- enum test

#include <iostream>

enum number
{
    zero,
    one,
    two,
    three,
    four
} bitvsl;

int main(int argc, const char **argv)
{
    using namespace std;

    cout << zero << endl;
    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;

    return EXIT_SUCCESS;
}