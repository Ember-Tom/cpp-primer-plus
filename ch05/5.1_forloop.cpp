// forloop.cpp -- introducing the for loop

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // create a counter
    int i;

// initialize; test; update
    for(i = 0; i < 5; i++)
    {
        cout << "C++ knows loops.\n";
    }

    cout << "C++ knows when to stop.\n";

    return EXIT_SUCCESS;
}