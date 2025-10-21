// new_strct.cpp -- using new with a structure

#include <iostream>

// structure definition
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char **argv)
{
    using namespace std;

    // allot memory for structure
    inflatable * ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    // method 1 for member access
    cin.get(ps -> name, 20);
    cout << "Enter volume in cubic feet: ";
    // method 2 for member access
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps -> price;

    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps -> volume << " cubic feet\n";
    cout << "Price: $" << ps -> price <<endl;

    // free memory used by structure
    delete ps;

    return EXIT_SUCCESS;
}
