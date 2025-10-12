/* 1.编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
 * 该程序使用下划线字符来指示输入位置。另外，使用一个const符号常量来表示转换因子。
 *
 * 
 * 
*/

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // 定义转换因子
    const unsigned char change = 12;
    // 身高值
    unsigned short hight = 0;

    cout << "Enter your hight:__\b\b";
    cin >> hight;
    cout << "Your are " << hight / change << " feet " << hight % change << " inch tall.";
    cout << endl;

    return EXIT_SUCCESS;
}