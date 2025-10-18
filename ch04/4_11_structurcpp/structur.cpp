// structur.cpp -- a simple structure

#include <iostream>

// strucuture declaration
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char **argv)
{
    using namespace std;

    inflatable guest = 
    {
        // name value
        "Glorious Gloria",
        // volume value
        1.88,
        // price value
        29.99
    };
    // guest is a structure variable of type inflatable

    // It's initialized to the indicated values
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };
    // pal is a second variable of type inflatable
    // NOTE： some implementations require using
    // static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    //pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";

    return EXIT_SUCCESS;
}