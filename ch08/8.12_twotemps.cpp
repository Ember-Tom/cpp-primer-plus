// twotemps.cpp -- using overloaded template functions

#include <iostream>

// original template
template <typename T>
void Swap(T &a, T &b);
// new template
template <typename T>
void Swap(T *a, T *b, int n);
void Show(int a[]);
const int LIM = 8;

int main(int argc, const char **argv)
{
    using namespace std;

    int i = 10, j = 20;

    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    // matches original template
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    int d1[LIM] = {1, 2, 4, 2, 3, 5, 6, 7};
    int d2[LIM] = {1, 0, 4, 7, 3, 3, 1, 7};

    cout << "Show original arrays:\n";
    Show(d1);
    Show(d2);
    Swap(d1, d2, LIM);
    cout << "Swapped arrays:\n";
    Show(d1);
    Show(d2);

    return EXIT_SUCCESS;
}

template <typename T>
void Swap(T &a, T &b)
{
    // temp a variable of type T
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// new template
template <typename T>
void Swap(T *a, T *b, int n)
{
    T temp;
    for(int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

}

void Show(int a[])
{
    using namespace std;

    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for(int i = 4; i < LIM; i++)
        cout << a[i];
    cout << endl;
}
