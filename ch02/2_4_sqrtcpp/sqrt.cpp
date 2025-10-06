// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>   // 一些老编译器该使用 math.h

int main(int argc, const char **argv)
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return EXIT_SUCCESS;
}