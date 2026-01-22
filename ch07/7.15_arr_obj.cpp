// arr_obj.cpp -- functions with array object (C++11)

#include <iostream>
#include <array>
#include <string>

using namespace std;

// constant data
const int SEASONS = 4;
const array<string, SEASONS> Snames = 
    {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(array<double, SEASONS> * pa);

// function that uses array object without modifying it
void show(array<double, SEASONS> da);

int main(int argc, const char **argv)
{
    array<double, SEASONS> expenses;

    fill(&expenses);

    show(expenses);

    return EXIT_SUCCESS;
}

void fill(array<double, SEASONS> * pa)
{
    for (int i = 0; i < SEASONS; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(array<double, SEASONS> da)
{
    double total = 0.0;

    cout << "\nEXPENSES\n";

    for (int i = 0; i < SEASONS; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;

        total += da[i];
    }

    cout << "Total Expenses: $" << total << endl;
}