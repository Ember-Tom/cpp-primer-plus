// arr_fun4.cpp -- functions with an array range

#include <iostream>

const int AR_SIZE = 8;

int sum_arr(const int * begin, const int * end);

int main(int argc, const char **argv)
{
    using namespace std;

    int cookies[AR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

//  some systems require preceding int with static to
//  enable array initialization

    int sum = sum_arr(cookies, cookies + AR_SIZE);

    cout << "Total cookies eaten: " << sum << endl;

    // first 3 elements
    sum = sum_arr(cookies, cookies + 3);

    cout << "First three eaters ate " << sum << " cookies.\n";

    // last 4 elements
    sum = sum_arr(cookies + 4, cookies + 8);

    cout << "Last four eaters ate " << sum << " cookies.\n";

    return EXIT_SUCCESS;
}

// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
    const int * PT;
    int total = 0;

    for(PT = begin; PT != end; PT++)
    {
        total += *PT;
    }

    return total;
}
