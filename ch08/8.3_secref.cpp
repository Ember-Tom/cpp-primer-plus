// secref.cpp -- defining and using a reference

#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;

    int rats = 101;
    // rodents is a refernce
    int &rodents = rats;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int ntr = 250;

    rodents = ntr;

    cout << "ntr = " << ntr;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "ntr address = " << &ntr;
    cout << ", rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    ntr++;

    cout << "ntr = " << ntr;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "ntr address = " << &ntr;
    cout << ", rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    rats++;

    cout << "ntr = " << ntr;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "ntr address = " << &ntr;
    cout << ", rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    rodents++;

    cout << "ntr = " << ntr;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "ntr address = " << &ntr;
    cout << ", rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return EXIT_SUCCESS;
}