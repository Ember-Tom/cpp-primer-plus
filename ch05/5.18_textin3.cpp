// textin3.cpp -- reading chars to end of file

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    char ch;
    int count = 0;

    // attempt to read a char
    cin.get(ch);

    // test for EOF
    while(cin.fail() == false)
    {
        // echo character
        cout << ch;
        ++count;
        // attempt to read another char
        cin.get(ch);
    }

    cout << endl << count << " characters read\n";

    return EXIT_SUCCESS;
}