// str_type4.cpp -- line input

#include <iostream>
// make string class available
#include <string>
// C-style string library
#include <cstring>

int main(int argc, const char **argv)
{
    using namespace std;

    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";

    // indicate maximum length
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of test:\n";
    
    // cin now an argument; no length specifier
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;

    return EXIT_SUCCESS;
}