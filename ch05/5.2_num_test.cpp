// num_test.cpp -- use numeric test in for loop 

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    cout << "Enter the starting countdown value: ";

    int limit;

    cin >> limit;

    int i;

    // quits when i is 0
    for(i = limit; i; i--)
    {
        cout << "i = " << i << "\n";
    }

    cout << "Done now that i = " << i << "\n";

    return EXIT_SUCCESS;
}