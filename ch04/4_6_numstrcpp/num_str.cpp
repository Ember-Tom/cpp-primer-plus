// num_str.cpp -- following number input with line input 

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    cout << "What year was your house built?\n";

    int year;

    cin >> year;
    // 混合输入解决方案
/**/cin.get();/**/

    cout << "What is its street address?\n";

    char address[80];

    cin.getline(address, 80);

    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";

    return EXIT_SUCCESS;
}

// 数字与字符混合输入根本的问题在于，无论是字符还是数字输入，输入完毕后都会带有换行符 '\n' 作为倒数第二个数据
// 后面的cin.getline( )看到换行符后，将认为是一个空行，并将一个空字符串赋给address数组。
