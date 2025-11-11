// strct_fun.cpp -- functions with a structure argument

#include <iostream>
#include <cmath>

// structure declarations
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
POLAR rect_to_polar(RECT xypos);
void show_polar(POLAR dapos);

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

// convert rectangular to polar coordinates
POLAR rect_to_polar(RECT xypos)
{
    using namespace std;

    POLAR answer;

    answer.distance = sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);

    // returns a polar structure
    return answer;
}

// show polar coordinates, converting angle to degrees
void show_polar(POLAR dapos)
{
    using namespace std;

    const double RAD_TO_DEG = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * RAD_TO_DEG;
    cout << " degrees\n";
}
