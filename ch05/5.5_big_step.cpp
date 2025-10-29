// big_step.cpp -- count as directed

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    cout << "Enter an integer: ";

    int by;

    cin >> by;

    cout << "Counting by " << by << "s:\n";

    for(int i = 0; i < 100; i = i + by)
    {
        cout << i << endl;
    }

    return EXIT_SUCCESS;
}
