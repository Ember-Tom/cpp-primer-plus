/*
 *编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
 *Enter your age: 29
 *
*/

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int age;
    int month;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age in month is " << (month = age * 12) << ".\n";

    return EXIT_SUCCESS;
}
