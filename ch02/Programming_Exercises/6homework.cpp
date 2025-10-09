/*6．编写一个程序，其main( )调用一个用户定义的函数（以光年值
 *为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输
 *入光年值，并显示结果：
 *Enter the number of light years: 4.2
 *4.2 light years = 265608 astronomical units.
 *
 *天文单位是从地球到太阳的平均距离（约150000000公里或
 *93000000英里），光年是光一年走的距离（约10万亿公里或6万亿英
 *里）（除太阳外，最近的恒星大约离地球4.2光年）。请使用double类型
 *（参见程序清单2.4），转换公式为：
 *1光年=63240天文单位
*/

#include <iostream>

double convert(double temp);

int main(int argc, const char **argv)
{
    using namespace std;

    double distance;
    double astronomical;

    cout << "Enter the number of light years: ";
    cin  >> distance;

    astronomical = convert(distance);

    cout << distance;
    cout << " light years = " << astronomical << " astronomical units.\n";

    return EXIT_SUCCESS;
}

double convert(double temp)
{
    double astronomical;

    astronomical = temp * 63240;

    return astronomical;
}


