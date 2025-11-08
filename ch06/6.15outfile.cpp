// outfile.cpp -- writing to a file

#include <iostream>
// for file I/O
#include <fstream>

int main(int argc, const char **argv)
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    // create object for output
    ofstream outFile;
    // associate with a file
    outFile.open("carinfo.txt");

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;

    d_price = 0.913 * a_price;

    // display information on screen with cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // now do exact same things using outFile instead of cout
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    // done with file
    outFile.close();

    return EXIT_SUCCESS;
}

/*
必须包含头文件iostream。
头文件iostream定义了一个用处理输出的ostream类。
头文件iostream声明了一个名为cout的ostream变量（对象）。
必须指明名称空间std；例如，为引用元素cout和endl，必须使用编
译指令using或前缀std::。
可以结合使用cout和运算符<<来显示各种类型的数据。
文件输出与此极其相似。
必须包含头文件fstream。
头文件fstream定义了一个用于处理输出的ofstream类。
需要声明一个或多个ofstream变量（对象），并以自己喜欢的方式
对其进行命名，条件是遵守常用的命名规则。
必须指明名称空间std；例如，为引用元素ofstream，必须使用编译
指令using或前缀std::。
需要将ofstream对象与文件关联起来。为此，方法之一是使用open(
)方法。
使用完文件后，应使用方法close( )将其关闭。
可结合使用ofstream对象和运算符<<来输出各种类型的数据。
*/