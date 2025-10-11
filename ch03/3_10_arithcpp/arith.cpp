// arith.cpp -- some C++ arithmetic

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    float hats, heads;

    // fixed-point
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";

    cin >> hats;

    cout << "Enter another number: ";
    
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    return EXIT_SUCCESS;
}