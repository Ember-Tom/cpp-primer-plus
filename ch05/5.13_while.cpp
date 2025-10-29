// while.cpp -- introducing the while loop

#include <iostream>

const int ArSize = 20;

int main(int argc, const char **argv)
{
    using namespace std;

    char name[ArSize];

    cout << "Your firest name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";

    // start at beginning of string
    int i = 0;

    // process to end of string 
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        // don't forget this step
        i++;
    }

    return EXIT_SUCCESS;
}