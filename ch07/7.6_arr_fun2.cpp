// arr_fun2.cpp -- functions with an array argument

#include <iostream>

const int AR_SIZE = 8;

int sum_arr(int arr[], int n);

int main(int argc, const char **argv)
{
    using namespace std;

    int cookies[AR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

    // some systems require preceding int with static to
    // enable array initialization
    cout << cookies << " = array address, ";
    // some systems require a type cast: usigned (cookies)

    cout << sizeof(cookies) << " = sizeof cookies\n";
    
    int sum = sum_arr(cookies, AR_SIZE);

    cout << "Total cookies eaten: " << sum << endl;

    // a lie
    sum = sum_arr(cookies, 3);

    cout << "First three eaters ate " << sum << " cookies.\n";

    // another lie
    sum = sum_arr(cookies + 4, 4);

    cout << "Last four eaters ate " << sum << " cookies.\n";

    return EXIT_SUCCESS;
}

// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;

    std::cout << arr << " = arr, ";
    // some systems require a type cast: unsigned (arr)

    std::cout << sizeof(arr) << " = sizeof arr\n";

    for(int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}
