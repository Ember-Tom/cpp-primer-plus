// limits.cpp -- some integer limits

#include <iostream>

// use limits.h for older systems
#include <climits>

int main(int agrc, const char **argv)
{
    using namespace std;

    // initialize n_int to max int value
    int n_int = INT_MAX;

    // symbols defined in climits file
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "int is " << sizeof n_int << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl << endl;
    
    // show the limits of this 
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return EXIT_SUCCESS;
}
