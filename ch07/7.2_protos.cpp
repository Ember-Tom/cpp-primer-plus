// protos.cpp -- using prototypes and function calls

#include <iostream>

// prototype: no return value 
void cheers(int n);
// prototype: returns a double
double cube(double x);

int main(int argc, const char **argv)
{
    using namespace std;

    // function call
    cheers(5);

    cout << "Give me a number: ";

    double side;

    cin >> side;

    // function call
    double volume = cube(side);

    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";

    // prototype protection at work
    cheers(cube(2));

    return EXIT_SUCCESS;
}

void cheers(int n)
{
    using namespace std;

    for(int i = 0; i < n; i++)
    {
        cout << "Cheers! ";
    }

    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}
