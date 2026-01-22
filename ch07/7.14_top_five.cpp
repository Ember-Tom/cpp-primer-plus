// top_five.cpp -- handling an array of string objects

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main(int argc, const char **argv)
{
    // an array holding 5 string object
    string list[SIZE];

    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";

        getline(cin, list[i]);
    }

    cout << "Your list:\n";

    display(list, SIZE);

    return EXIT_SUCCESS;
}

void display(const string sa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}
