// sqrt.cpp -- using the sqrt() function
// 展示库函数的头文件引入与相关函数使用
// area 面积；地区；地方；
// side 边

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