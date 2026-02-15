// funtemp.cpp -- using a function template

#include <iostream>

// function template prototype
// class T
template <typename T>
void Swap(T &a, T &b);

int main(int argc, const char **argv)
{
    using namespace std;

    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    // generates void Swap(int &, int &)
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "Using compiler-generated double swapper:\n";
    // generates void Swap(double &, double &)
    Swap(x, y);
    cout << "Now x, y = " << x << ", " << y << ".\n";

    return EXIT_SUCCESS;
}

// function template definition
// or class T
template <typename T> 
void Swap(T &a, T &b)
{
    // temp a variable of type T
    T temp;
    temp = a;
    a = b;
    b = temp;
}
