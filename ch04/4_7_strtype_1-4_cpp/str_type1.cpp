// str_type1.cpp -- using the C++ string class

#include <iostream>
#include <string>

int main(int argc, const char **argv)
{
    using namespace std;

    // create an empty array
    char charr1[20];
    // create an initialized array
    char charr2[20] = "jaguar";
    // create an empty string object
    string str1;
    // create an initialized string
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    // use cin for input
    cin >> str1;
    cout << "Here are some feline:\n";
    cout << charr1 << " "<< charr2 << " "
         // use cout for output
         << str1 << " " << str2 
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         // use array notation
         << str2[2] << endl;
         
    return EXIT_SUCCESS;
}
