// union.cpp -- the test of union

#include <iostream>

union The_txt
{
    int int_val;
    long long_val;
    double double_val;
};

int main(int argc, const char **argv)
{
    using namespace std;

    The_txt union_val;

    cout << "Enter a number:\n";
    cin >> union_val.int_val;
    cout << union_val.int_val << " " << sizeof(union_val.int_val) << endl;
    cout << "Enter a number:\n";
    cin >> union_val.long_val;
    cout << union_val.long_val << " " << sizeof(union_val.long_val) << endl;
    cout << "Enter a number:\n";
    cin >> union_val.double_val;
    cout << union_val.double_val << " " << sizeof(union_val.double_val) << endl;

    return EXIT_SUCCESS;
}