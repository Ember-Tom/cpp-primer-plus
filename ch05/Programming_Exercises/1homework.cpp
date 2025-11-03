/*

1．编写一个要求用户输入两个整数的程序。该程序将计算并输出
这两个整数之间（包括这两个整数）所有整数的和。这里假设先输入较
小的整数。例如，如果用户输入的是2和9，则程序将指出2～9之间所有
整数的和为44。

*/

#include <iostream>

// 获取数字并求值
void Get_num(void);

int main(int argc, const char **argv)
{
    Get_num();

    return EXIT_SUCCESS;
}

void Get_num(void)
{
    using namespace std;

    int first;
    int end;
    int sum;

    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the end number:";
    cin >> end;

    if(first > end)
    {
        for(int i = first; i > (end - 1); i--)
        {
            sum += i;
        }
    }
    else 
    {
        for(int i = first; i < (end + 1); i++)
        {
            sum += i;
        }
    }

    cout << "the sum = " << sum << endl;
}