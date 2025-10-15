/*
3．编写一个程序，要求用户以度、分、秒的方式输入一个纬度，
然后以度为单位显示该纬度。1度为60分，1分等于60秒，请以符号常量
的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
下面是该程序运行时的情况：

Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

*/

#include <iostream>

void Get_Latitude(void);

int main(int argc, const char **argv)
{
    using namespace std;

    Get_Latitude();

    return EXIT_SUCCESS;
}

void Get_Latitude(void)
{
    using namespace std;

    const int riato = 60;

    int degrees;
    int minutes;
    int seconds;
    double latitude;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    latitude = (double)degrees + (double)minutes / riato + (double)seconds / (riato * riato);

    cout << degrees << " degrees, "
         << minutes << " minutes, "    
         << seconds << " seconds = " 
         << latitude << " degrees\n";

}
