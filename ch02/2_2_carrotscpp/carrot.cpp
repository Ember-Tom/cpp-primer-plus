// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream> 

int main (int argc, const char **argv)
{
    using namespace std;

    int carrots;            // declare an integer variable
    char name;
    float num;
    carrots = 25;           // assign a value to the variable
    cout << "I have ";       
    cout << carrots;        // display the value to the variable
    cout << " carrots.";     
    cout << endl;
    carrots = carrots - 1;  // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    cout << (name = 'A') << endl;
    cout << (name = 'B') << endl;
    cout << (carrots = name) << endl;   // 字符转整形
    cout << (name = carrots + 1) << endl;   // 整形转字符
    cout << (num = 114.5145) << endl;
    cout << (carrots = num) << endl;        // 浮点数转整数
    cout << (num = name) << endl;           // 字符转浮点数

    return EXIT_SUCCESS;
}

// 这些是我初见的思考，并非正确结论
/*
 *从这里可以看出，cout与C语言的输出函数printf不一样。
 *变量不需要描述符号，如%d去为变量描述输出内容
 *cout可以让括号内部等式成立
 *强制转换没法通过，但是可以通过 = 间接转化为整形
 *数据输出可以间接转换，浮点数转整形会丢精度。
*/ 