/*

1. Write a C++ program that requests and displays information as shown in the following example of output:
1．编写一个C++程序，如下述输出示例所示的那样请求并显示信息：
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22

*/

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    const int index = 20;

    cout << "What is your first name? ";
    char fname[index];
    cin.getline(fname, index);

    cout << "What is your last name? ";
    char lname[index];
    cin.getline(lname, index);

    cout << "What letter grade do you deserve? ";
    char letter;
    cin >> letter;

    cout << "What is your age? ";
    int age;
    cin >> age;

    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << char (letter + 1) << endl;
    cout << "Age: " << age << endl;

    return EXIT_SUCCESS;
}
