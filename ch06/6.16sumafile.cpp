// sumafile.cpp -- functions with an array argument

#include <iostream>
// file I/O support
#include <fstream>
// support for exit()
#include <cstdlib>

const int SIZE = 60;

int main(int argc, const char **argv)
{
    using namespace std;

    char filename[SIZE];

    // object for handling file input
    ifstream inFile;

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);

    // associate inFile with a file
    inFile.open(filename);

    // failed to open file
    if(! inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    // number of items read
    int count = 0;

    // get first value
    inFile >> value;

    // while input good and not at EOF
    while(inFile.good())
    {
        // one more item read
        ++count;
        // calculate running total 
        sum += value;
        // get next value
        inFile >> value;
    }

    if(inFile.eof())
    {
        cout << "End of file reached.\n";
    }
    else if (inFile.fail())
    {
        cout << "Input terminated by data mismatch.\n";
    }
    else 
    {
        cout << "Input terminated for unknown reason.\n";
    }

    if(count == 0)
    {
        cout << "No data processed.\n";
    }
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }

    // finished with the file
    inFile.close();

    return EXIT_SUCCESS;
}

/*
必须包含头文件iostream。
头文件iostream定义了一个用处理输入的istream类。
头文件iostream声明了一个名为cin的istream变量（对象）。
必须指明名称空间std；例如，为引用元素cin，必须使用编译指令
using或前缀std::。
可以结合使用cin和运算符>>来读取各种类型的数据。
可以使用cin和get( )方法来读取一个字符，使用cin和getline( )来读
取一行字符。
可以结合使用cin和eof( )、fail( )方法来判断输入是否成功。
对象cin本身被用作测试条件时，如果最后一个读取操作成功，它
将被转换为布尔值true，否则被转换为false。
文件输出与此极其相似：
必须包含头文件fstream。
头文件fstream定义了一个用于处理输入的ifstream类。
需要声明一个或多个ifstream变量（对象），并以自己喜欢的方式
对其进行命名，条件是遵守常用的命名规则。
必须指明名称空间std；例如，为引用元素ifstream，必须使用编译
指令using或前缀std::。
需要将ifstream对象与文件关联起来。为此，方法之一是使用open( )
方法。使用完文件后，应使用close( )方法将其关闭。
可结合使用ifstream对象和运算符>>来读取各种类型的数据。
可以使用ifstream对象和get( )方法来读取一个字符，使用ifstream对
象和getline( )来读取一行字符。
可以结合使用ifstream和eof( )、fail( )等方法来判断输入是否成功。
ifstream对象本身被用作测试条件时，如果最后一个读取操作成
功，它将被转换为布尔值true，否则被转换为false。
*/
