// compstr2.cpp -- comparing strings using arrays

#include <iostream>
// string class
#include <string>

int main(int argc, const char **argv)
{
    using namespace std;

    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;

    return EXIT_SUCCESS;
}
