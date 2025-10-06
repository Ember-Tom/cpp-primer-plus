// ourfunc.cpp -- defining your own function
// 展示用户定义函数的定义与使用
// touch 碰，触（觉）
// toes(toe的复数形式) 脚趾
// pick 挑选，采；剔除

#include <iostream>

// function prototype for simon()
void simon(int n);

int main(int agrc, const char **argv)
{
    using namespace std;
    // call the simon() function
    simon(666);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    // call it again
    simon(count);
    cout << "Done!" << endl;

    return EXIT_SUCCESS;
}

// difine the simon() function
void simon(int n)
{
    using namespace std;
    cout << "Simon say touch your toes " << n <<" times." << endl;

    // void function don't need return statements
}