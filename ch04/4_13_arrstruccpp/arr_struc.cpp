// arr_struc.cpp -- an array of structures

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char **argv)
{
    using namespace std;

    // initializing an array of structs
    inflatable guests[2] =
    {
        // first structure in array
        {"Bambi", 0.5, 21.99},
        // next structure in array
        {"Godzilla", 2000, 565.99}
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";
         
    return EXIT_SUCCESS;
}