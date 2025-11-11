// strg_back.cpp -- a function that returns a pointer to char

#include <iostream>

// prototype
char * buildstr(char ch, int num);

int main(int argc, const char **argv)
{
    using namespace std;

    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;

    char *ps = buildstr(ch, times);

    cout << ps << endl;
    
    // free memory
    delete [] ps;

    // reuse pointer
    ps = buildstr('+', 20);

    cout << ps << "-DONE-" << ps << endl;

    // free memory
    delete [] ps;

    return EXIT_SUCCESS;
}

// builds string made of n c characters
char * buildstr(char ch, int num)
{
    char * pstr = new char[num + 1];

    // terminate string
    pstr[num] = '\0';

    while(num-- > 0)
    {
        // fill rest of string
        pstr[num] = ch;
    }

    return pstr;
}
