// do_while.cpp -- exit-condition loop

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";

    do
    {
        // execute body
        cin >> n;
    // then test
    } while (n != 7);

    cout << "Yes, 7 is my favorite.\n";

    return EXIT_SUCCESS;
}