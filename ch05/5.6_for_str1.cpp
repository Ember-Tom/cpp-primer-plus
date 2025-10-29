// for_str1.cpp -- using for with a string

#include <iostream>
#include <string>

int main(int argc, const char **argv)
{
    using std::string;
    using std::cout;
    using std::cin;

    cout << "Enter a word: ";

    string word;

    cin >> word;

    // display letters in reverse order
    for(int i = word.size() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    
    cout << "\nBye.\n";

    return EXIT_SUCCESS;
}
