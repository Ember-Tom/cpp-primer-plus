// instr1.cpp -- reading more than one string

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    const int AriSize = 20;
    char name[AriSize];
    char dessert[AriSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return EXIT_SUCCESS;
}