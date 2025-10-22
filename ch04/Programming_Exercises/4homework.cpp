/*

4．编写一个程序，它要求用户首先输入其名，再输入其姓；然后
程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
请使用string对象和头文件string中的函数。下面是该程序运行时的情
形：

Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip

*/

#include <iostream>
#include <string>

int main(int argc, const char **argv)
{
    using namespace std;

    string First_name;
    string Last_name;
    string name;

    cout << "Enter your first name: ";
    cin >> First_name;
    cout << "Enter your last name: ";
    cin >> Last_name;

    name = Last_name + ", " + First_name;

    cout << "Here's the information in a single string: " << name << endl;

    return EXIT_SUCCESS;
}
