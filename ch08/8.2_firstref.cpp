// firstref.cpp -- defining and using a reference

#include <iostream>

void show(int a, int b);

using namespace std;

int main(int argc, char **argv)
{


    int rats = 101;
    // rodents is a refernce
    int &rodents = rats;
    

    show(rats, rodents);

    rodents++;

    show(rats, rodents);

    rats++;

    show(rats, rodents);

    // some implementations require type casting the following
    // addresses to type unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return EXIT_SUCCESS;
}

void show(int a, int b)
{
    cout << "rats = " << a;
    cout << ", rodents = " << b << endl;    
}