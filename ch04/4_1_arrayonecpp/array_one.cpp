// arrary_one.cpp -- small arrays of integers

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // creates array with three elements
    int yams[3];
    // assign value to first element
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    // creats, initialize array
    // NOTE: If your C++ compiler or translator can't initialize
    // this array, use static int yamcosts[3] intstead of int yamcosts[3]
    int yamcosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];

    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof (yams) << " bytes.\n";
    cout << "Size of one element = " << sizeof (yams[0]) << " bytes.\n";

    return EXIT_SUCCESS;
}