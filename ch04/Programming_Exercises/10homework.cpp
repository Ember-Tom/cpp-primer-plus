/*

10．编写一个程序，让用户输入三次40码跑的成绩（如果您愿意，
也可让用户输入40米跑的成绩），并显示次数和平均成绩。请使用一个
array对象来存储数据（如果编译器不支持array类，请使用数组）。

10. Write a program that requests the user to enter three times for the 40-yd dash (or
40-meter, if you prefer) and then displays the times and the average. Use an array
object to hold the data. (Use a built-in array if array is not available.)

*/

#include <iostream>
#include <array>

using namespace std;

array<double, 3> marathon;

int main(int argc, const char **argv)
{

    double ave_scores;

    cout << "Enter the First Marathon results: ";
    cin >> marathon[0];
    cout << "Enter the Second Marathon results: ";
    cin >> marathon[1];
    cout << "Enter the Third Marathon results: ";
    cin >> marathon[2];

    ave_scores = marathon[0] + marathon[1] + marathon[2];

    cout << "Your Marathon averages results is " << ave_scores << ".\n";

    return EXIT_SUCCESS;
}