/*

7．编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—每加
仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等
于3.875升。因此，19mpg大约合12.4l/100km，27mpg大约合8.71/100km。

Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon. Note that in addition to using different units of measurement, the
U.S. approach (distance / fuel) is the inverse of the European approach (fuel / dis-
tance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.

*/

#include <iostream>

int main(int argc, const char **argv)
{   
    using namespace std;

    const float ritoa_dis = 0.6214;
    const float ritoa_fue = 3.875;

    double fuel;
    double distance;    
    double the_mpg;

    cout << "Enter your mileage: ";
    cin >> distance;
    cout << "Enter the amount of fuel consumed by the vehicle: ";
    cin >> fuel;

    the_mpg = (((double) distance * ritoa_dis) / ((double) fuel / ritoa_fue));

    cout << "Your car's fuel consumption is " << the_mpg << " mpg.\n";

    return EXIT_SUCCESS;
}


/*
    错误样本
    int fuel;
    int distance;
    
    Enter your mileage: 12.4
    Enter the amount of fuel consumed by the vehicle: Your car's fuel consumption is inf mpg.
*/