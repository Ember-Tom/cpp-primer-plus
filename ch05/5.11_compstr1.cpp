// compstr1.cpp -- comparing strings using arrays

#include <iostream>
// prototype for strcmp()
#include <cstring>

int main(int argc, const char **argv)
{
    using namespace std;

    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word,"mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;

    return EXIT_SUCCESS;
}