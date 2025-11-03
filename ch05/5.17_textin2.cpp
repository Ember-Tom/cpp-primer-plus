// textin2.cpp -- using cin.get(char)

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    char ch ;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";

    // use the cin.get(ch) function
    cin.get(ch);

    while(ch != '#')
    {
        cout << ch;
        ++count;
        // use it again
        cin.get(ch);
    }

    cout << endl << count << " characters read\n";

    return EXIT_SUCCESS;
}

/*

如果熟悉C语言，可能以为这个程序存在严重的错误！cin.get(ch)调
用将一个值放在ch变量中，这意味着将修改该变量的值。在C语言中，
要修改变量的值，必须将变量的地址传递给函数。但程序清单5.17调用
cin.get( )时，传递的是ch，而不是&ch。在C语言中，这样的代码无效，
但在C++中有效，只要函数将参数声明为引用即可。引用是C++在C语
言的基础上新增的一种类型。头文件iostream将cin.get(ch)的参数声明为
引用类型，因此该函数可以修改其参数的值。我们将在第8章中详细介
绍。同时，C语言行家可以松一口气了—通常，在C++中传递的参数的
工作方式与在C语言中相同。然而，cin.get(ch)不是这样。

*/