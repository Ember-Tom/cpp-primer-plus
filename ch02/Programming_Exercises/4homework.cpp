/*5.
 *编写一个程序，其中的main( )调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。
 *该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
 *Please enter a Celsius value: 20
 *20 degrees Celsius is 68 degrees Fahrenheit.
 *下面是转换公式：华氏温度 = 1.8×摄氏温度 + 32.0
 * 
*/

#include <iostream>

double Celsius_to_Fahrenheit(double degrees);

int main(int argc, const char **argv)
{
    using namespace std;

    double degrees;

    cout << "Please enter a Celsius value: ";
    cin >> degrees;
    
    double Fah = Celsius_to_Fahrenheit(degrees);

    cout << degrees << " degrees Celsius is " << Fah << " degrees Fahrenheit." << endl;

    return EXIT_SUCCESS;
}

double Celsius_to_Fahrenheit(double degrees)
{
    return 1.8 * degrees + 32.0;
}