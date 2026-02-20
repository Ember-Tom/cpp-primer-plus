// static.cpp -- using a static local variable

#include <iostream>

// constants
const int ArSize = 10;

// function prototype
void strcount(const char *str);

int main(int argc, const char **argv)
{
    using namespace std;

    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input,ArSize);
    while(cin)
    {
        cin.get(next);
        // string didn't fit
        while(next != '\n')
        {
            // dispose of remainder
            cin.get(next);
        }

        strcount(input);

        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    }

    cout << "Bye\n";

    return EXIT_SUCCESS;
}

void strcount(const char *str)
{
    using namespace std;

    // static local variable
    static int total = 0;
    // automatic local variable
    int count = 0;

    cout << "\"" << str << "\" contains ";

    // go to end of string
    while(*str++)
    {
        count++;
    }
    total += count;

    cout << count << " characters\n";
    cout << total << " characters total\n";
}

