// textin4.cpp -- reading chars with cin.get()

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // should be int, not char
    int ch;
    int count = 0;

    // test for end-file
    while((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }

    cout << endl << count << " characters read\n";

    return EXIT_SUCCESS;
}