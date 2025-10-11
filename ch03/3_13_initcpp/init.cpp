// init.cpp -- type changes on initialization

#include <iostream>

int main(int argc, const char ** argv)
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    // int converted to float
    float tree = 3;
    // double convert to int 
    int guess(3.9832);
    // result not defined in C++
    int debt = 7.2E12;

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    return EXIT_SUCCESS;
}