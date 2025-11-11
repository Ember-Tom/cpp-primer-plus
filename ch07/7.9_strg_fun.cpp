// strg_fun.cpp -- functions with a string argument

#include <iostream>

unsigned int c_in_str(const char * str, char ch);

int main(int argc, const char **argv)
{
    using namespace std;

    // string in an array
    const char mmm[15] = "minimum";

// some systems require preceding char with static to
// enable array initalization

    // wail points to string
    const char * wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;

    return EXIT_SUCCESS;
}

// this function counts the number of ch characters
// in the string str
unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    // quit when *str is '\0'
    while (* str)
    {
        if(* str == ch)
        {
            count++;
        }
        // move pointer to next char
        str++;
    }

    return count;
}