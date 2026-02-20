// external.cpp -- external variables
// compile with support.cpp

#include <iostream>

using namespace std;

// external variable
// warming defined
double warming = 0.3;
// function prototypes
void update(double dt);
void local();

int main(int argc, const char **argv)
{
    cout << "Global warming is " << warming << " degrees.\n";
    // call function to change warming
    update(0.1);

    cout << "Global warming is " << warming << " degrees.\n";
    // call function with local warming
    local();

    cout << "Global warming is " << warming << " degrees.\n";

    return EXIT_SUCCESS;
}
