// 2．编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一long等于220码）。

#include <iostream>

int convert(int yard);

int main(int argc, const char **argv)
{
    using namespace std;

    int size;

    cout << "Please enter the size: ";
    cin >> size;
    cout << "The "  << size << " size is ";
    
    int number = convert(size);

    cout << number << " long.\n";

    return EXIT_SUCCESS;
}

// change the long to yard(码)
int convert(int yard)
{
    return 220 * yard;
}
