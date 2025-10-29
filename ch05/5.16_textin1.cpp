// textin1.cpp -- reading chars with a while loop

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    char ch;
    // use basic input 
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    // get a character
    cin >> ch;

    // test the character
    while (ch != '#')
    {
        // echo the character
        cout << ch;
        // count the character
        ++count;
        // get the next character
        cin >> ch;
    }

    cout << endl << count << " characters read\n";

    return EXIT_SUCCESS;
}