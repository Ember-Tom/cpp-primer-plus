// delete.cpp -- using the delete operator

#include <iostream>
// or string.h
#include <cstring>

using namespace std;

// function prototype
char * getname(void);

int main(int argc, const char **argv)
{
    // create pointer but no storage
    char * name;

    // assign address of string to name
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    // memory freed
    delete [] name;

    // reuse freed memory
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    // memory freed again
    delete [] name;

    return EXIT_SUCCESS;
}

// return pointer to new string
char * getname(void)
{
    // temporary storage
    char temp[80];

    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char [strlen(temp) + 1];

    // copy string into smaller space
    strcpy(pn, temp);

    // temp lost when function ends
    return pn;
}
