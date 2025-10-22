/*

3．编写一个程序，它要求用户首先输入其名，然后输入其姓；然
后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结
果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的
情形：

Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip

*/

#include <iostream>
#include <cstring>

int main(int argc, const char **argv)
{
    using namespace std;

    char First_name[30];
    char Last_name[30];
    char name[80];

    cout << "Enter your first name: ";
    cin >> First_name;
    cout << "Enter your last name: ";
    cin >> Last_name;

    strcpy(name, Last_name);
    strcat(name, ", ");
    strcat(name, First_name);

    cout << "Here's the information in a single string: " 
         << name << endl;

    return EXIT_SUCCESS;
}