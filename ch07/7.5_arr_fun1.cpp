// arr_fun1.cpp -- function with an array argument

#include <iostream>

const int AR_SIZE = 8;

// prototype
int sum_arr(int arr[], int n);

int main(int argc, const char **argv)
{
    using namespace std;

    int cookies[AR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

// some systems require preceding int with static to
// enable array initialization

    int sum = sum_arr(cookies, AR_SIZE);

    cout << "Total cookies eaten: " << sum << "\n";

    return EXIT_SUCCESS;
}

// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}
