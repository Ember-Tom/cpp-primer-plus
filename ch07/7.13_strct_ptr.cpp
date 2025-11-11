// strct_ptr.cpp -- functions with pointer to structure arguments

#include <iostream>
#include <cmath>

// structure templates
struct POLAR
{
    // distance from origin
    double distance;
    // direction from origin
    double angle;
};

struct RECT
{
    // horizontal distance from origin
    double x;
    // vertical distance from origin
    double y;
};

// prototypes
void rect_to_polar(const RECT * pxy, POLAR * pda);
void show_polar(const POLAR * pda);

int main(int argc, const char **argv)
{
    using namespace std;

    RECT rplace;
    POLAR pplace;

    cout << "Enter the x and y values: ";

    while(cin >> rplace.x >> rplace.y)
    {
        // pass addresses
        rect_to_polar(&rplace, &pplace);
        // pass address
        show_polar(&pplace);
        
        cout << "Next two number (q to quit): ";
    }

    cout << "Done.\n";

    return EXIT_SUCCESS;
}

// show polar coordinates, converting angle to degrees
void show_polar(const POLAR * pda)
{
    using namespace std;

    const double RAD_TO_DEG = 57.29577951;

    cout << "distance = " << pda -> distance;
    cout << ", angle = " << pda -> angle * RAD_TO_DEG;
    cout << " degrees\n";
}

// convert rectangular to polar coordinates
void rect_to_polar(const RECT * pxy, POLAR * pda)
{
    using namespace std;

    pda -> distance = sqrt(pxy -> x * pxy -> x + pxy -> y * pxy -> y);
    pda -> angle = atan2(pxy -> y, pxy -> x);
}
