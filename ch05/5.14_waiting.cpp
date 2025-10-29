// waiting.cpp -- using clock() in a time-delay loop 

#include <iostream>
// describes clock() function, clock_t type
#include <ctime>

int main(int argc, const char **argv)
{
    using namespace std;

    cout << "Enter the delay time, in seconds: ";

    float secs;

    cin >> secs;

    // convert to clock ticks
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "starting\a\n";

    clock_t start = clock();

    // wait until time elapses
    while (clock() - start < delay)
    {
        // note the semicolon
        ;
    }

    cout << "done \a\n";

    return EXIT_SUCCESS;
}