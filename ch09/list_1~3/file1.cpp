#include <iostream>
#include "coordin.h"

int main(int argc, const char **argv)
{
    using namespace std;

    RECT rplace;
    POLAR pplace;

    cout << "Enter the x and y values: ";

    // slick use of cin
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);

        show_polar(pplace);

        cout << "Next two number (q to quit): ";
    }

    cout << "Done.\n";

    return EXIT_SUCCESS;
}
