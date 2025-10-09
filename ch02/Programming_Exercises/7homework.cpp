/*
 *7．编写一个程序，要求用户输入小时数和分钟数。
 *在main( )函数中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值：
 *Enter the number of hours: 9
 *Enter the number of minutes: 28
 *Time: 9:28
 * 
*/

#include <iostream>

void Show_Times(const int hou, const int min);

int main(int argc, const char **argv)
{
    using namespace std;

    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    Show_Times(hours,minutes);

    return EXIT_SUCCESS;
}

void Show_Times(const int hou, const int min)
{
    using namespace std;

    cout << "Times: " << hou << ":" << min << endl;

}
