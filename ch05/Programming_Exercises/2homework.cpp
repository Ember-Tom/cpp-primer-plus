/*
2．使用array对象（而不是数组）和long double（而不是long long）
重新编写程序清单5.4，并计算100!的值。
*/

#include <iostream>
#include <array>

const int AR_SIZE = 100;

int main(int argc, const char **argv)
{
    using namespace std;

    array<long double, AR_SIZE> factorials;

    factorials[1] = factorials[0] = 1LL;

    for(int i = 2; i < AR_SIZE; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    
    for(int i = 0; i < AR_SIZE; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }

    return EXIT_SUCCESS;
}

/*
#include <iostream>

// example of external declaration
const int ArSize = 16;

int main(int argc, const char **argv)
{
    long long factorials[ArSize];

    factorials[1] = factorials[0] = 1LL;

    for(int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    
    for(int i = 0; i < ArSize; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }

    return EXIT_SUCCESS;
}
*/
