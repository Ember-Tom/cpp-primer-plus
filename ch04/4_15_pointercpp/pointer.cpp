// pointer.cpp -- our first pointer variable

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // declare a variable
    int updates = 6;
    // declare pointer to an int
    int * p_updates;

    // assign address of int to pointer
    p_updates = &updates;

    // express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates <<endl;
    cout << "Now p_updates = " << &p_updates <<endl;

    return EXIT_SUCCESS;
}