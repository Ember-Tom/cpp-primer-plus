// modulus.cpp -- uses % operator to convert lbs to stone

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;

    // whole stone
    int stone = lbs / Lbs_per_stn;
    // remainder in pounds
    int pounds = lbs % Lbs_per_stn;

    cout << lbs << " pounds are " << stone 
         << " stone, " << pounds << " pound(s).\n";

    return EXIT_SUCCESS;
}