// twoswap.cpp -- specialization overrides a template

#include <iostream>

template <typename T>
void Swap(T &a, T &b);

struct JOB
{
    char name[40];
    double salary;
    int floor;
};

// explicit specialization
template <> void Swap<JOB>(JOB &j1, JOB &j2);

void My_Swap(JOB *j1, JOB *j2);
void Show(JOB &j);

int main(int argc, const char **argv)
{
    using namespace std;

    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);

    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    // generates void Swap(int &, int &)
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";

    JOB sue = {"Susan Yaffee", 73000.60, 7};
    JOB sidney = {"Sidney Taffee", 78060.72, 9};

    cout << "Before JOB swapping:\n";
    Show(sue);
    Show(sidney);
    // uses void Swap(JOB &, JOB &)
    Swap(sue,sidney);
    cout << "After JOB swapping:\n";
    Show(sue);
    Show(sidney);

    My_Swap(&sue,&sidney);
    cout << "My thinking:\n";
    Show(sue);
    Show(sidney);

    return EXIT_SUCCESS;
}

template <typename T> 
// general version
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a JOB structure
template <> void Swap<JOB>(JOB &j1, JOB &j2)
{
    double t1;
    int t2;

    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void My_Swap(JOB *j1, JOB *j2)
{
    double t1;
    int t2;

    t1 = j1 -> salary;
    j1 -> salary = j2 -> salary;
    j2 -> salary = t1;

    t2 = j1 -> floor;
    j1 -> floor = j2 -> floor;
    j2 -> floor = t2;
}

void Show(JOB &j)
{
    using namespace std;

    cout << j.name << ": $" << j.salary
         << " on floor " << j.floor << endl;
}