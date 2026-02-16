#ifndef COORDIN_H_
#define COORDIN_H_

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

#endif