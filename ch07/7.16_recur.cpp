// recur.cpp -- using recursion

#include <iostream>

void countdown(int n);

int main(int argc, const char **argv)
{
    // call the recursive function
    countdown(4);

    return EXIT_SUCCESS;
}

void countdown(int n)
{
    using namespace std;

    cout << "Counting down ... " << n << " (n at " << &n << ")" << endl;

    if(n > 0)
    {
        // function calls itself
        countdown(n - 1);

        cout << n << ": Kaboom!" << "          (n at " << &n << ")" << endl;
    }
}