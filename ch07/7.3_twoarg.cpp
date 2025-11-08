// twoarg.cpp -- a function with 2 arguments

#include <iostream>

using namespace std;

void n_chars(char c, int n);

int main(int argc, const char **argv)
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // q to quit
    while(ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;

        // function with two arguments
        n_chars(ch, times);

        cout << "\nEnter another character or press the"
                " q-key to quit: ";
        cin >> ch;
    }

    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";

    return EXIT_SUCCESS;
}

// display c n times
void n_chars(char c, int n)
{
    // continue until n reaches 0
    while(n-- > 0)
    {
        cout << c;
    }
}
