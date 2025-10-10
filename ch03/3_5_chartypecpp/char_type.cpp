// char_type.cpp -- the char type

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // declare a char variable
    char ch;

    cout << "Enter a character: " << endl;

    cin >> ch;
    
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;

    return EXIT_SUCCESS;
}