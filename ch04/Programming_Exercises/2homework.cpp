/*

2．修改程序清单4.4，使用C++ string类而不是char数组。

*/

/* instr2.cpp -- reading more than one word with getline

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    const int AriSize = 20;
    char name[AriSize];
    char dessert[AriSize];

    cout << "Enter your name:\n";
    // reads through newline
    cin.getline(name,AriSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,AriSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return EXIT_SUCCESS;
}   */

#include <iostream>
#include <string>

int main(int argc, const char **argv)
{
    using namespace std;

    string name;
    string dessert;

    cout << "Enter your name:\n";
    // reads through newline
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return EXIT_SUCCESS;
}
