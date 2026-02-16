#include <iostream>
#include <cmath>
#include "coordin.h"

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
