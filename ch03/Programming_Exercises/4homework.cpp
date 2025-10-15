/*
4．编写一个程序，要求用户以整数方式输入秒数（使用long或long
long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使
用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多
少秒。该程序的输出应与下面类似：

Enter the number of seconds:31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    const int days_ritoa = 24;
    const int time_ritoa = 60;

    long long data;
    int seconds;
    int minutes;
    int hours;
    int days;

    cout << "Enter the number of seconds: ";
    cin >> data;

    seconds = data % time_ritoa;
    minutes = (data / time_ritoa) % time_ritoa;
    hours = (data / (time_ritoa * time_ritoa)) % days_ritoa;
    days = data / (time_ritoa * time_ritoa * days_ritoa) ;
    
    cout << data << " seconds = " 
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds" << endl;

    return EXIT_SUCCESS;
}