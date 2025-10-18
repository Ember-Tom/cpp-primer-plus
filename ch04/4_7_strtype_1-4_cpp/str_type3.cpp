// str_type3.cpp -- more string class features

#include <iostream>
// make string class available
#include <string>
// C-style string library
#include <cstring>

int main(int argc, const char **argv)
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // assignment for string objects and character arrays
    // copy str2 to str1
    str1 = str2;
    // copy charr2 to charr1
    strcpy(charr1, charr2);

    // appending for string objects and character arrays
    // add paste to end of str1
    str1 += " paste";
    // add juice to end of charr1
    strcat(charr1, " juice");

    // finding the length of a string object and a C-style string
    // obtain length of str1
    int len1 = str1.size();
    // obtain length of charr1
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";

    return EXIT_SUCCESS;
}