// more_char.cpp -- the char type and int type contrasted

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // assign ASCII code for M to ch
    char ch = 'M';
    // store same code in an int
    int i = ch;
    
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code:" << endl;

    // change character code in ch
    ch = ch + 1;
    // save new character code in i
    i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // using the cout.put() to display a char constant
    cout.put('!');
    cout << endl << "Done" << endl;

    // cout << (&ch) << endl << (&i) << endl;
    return EXIT_SUCCESS;
}