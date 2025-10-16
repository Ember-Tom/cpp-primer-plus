/*

6．编写一个程序，要求用户输入驱车里程（英里）和使用汽油量
（加仑），然后指出汽车耗油量为一加仑的里程。
如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后
指出欧洲风格的结果—即每100公里的耗油量（升）。
Enter your mileage: 
Enter the amount of fuel consumed by the vehicle: 
It consumes __ litres of petrol per __ kilomentres.

*/

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int mileage;
    int fuel;
    double ritoa;

    cout << "Enter your mileage: ";
    cin >> mileage;
    cout << "Enter the amount of fuel consumed by the vehicle: ";
    cin >> fuel;

    ritoa = ((double) fuel / (double) mileage) * 100;

    cout << "It consumes "<< ritoa <<" litres of petrol per 100 kilomentres." << endl;

    return EXIT_SUCCESS;
}

