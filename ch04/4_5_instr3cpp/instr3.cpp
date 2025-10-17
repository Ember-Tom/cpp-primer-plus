// instr3.cpp -- reading more than one word with get() & get()

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    const int AriSize = 20;
    char name[AriSize];
    char dessert[AriSize];

    cout << "Enter your name:\n";
    // read string, newline;
    cin.get(name, AriSize).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, AriSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return EXIT_SUCCESS;
}
