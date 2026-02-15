// leftover.cpp -- overloading the left() function

#include <iostream>

unsigned long left(unsigned long num, unsigned ct);
char * left(const char *str, int n = 1);

int main(int argc, const char **argv)
{
    using namespace std;

    // test value
    char * trip = "Hawaii!!";
    unsigned long n = 12345678;
    int i;
    char * temp;

    for(i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        // point to temporary storage
        delete [] temp;
    }

    return EXIT_SUCCESS;
}

// This function returns the first ct digits of the number num.
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if(0 == ct || 0 == num)
        // return 0 if no digits
        return 0;
    
    while(n /= 10)
        digits++;

    if(digits <= ct)
    {
        return num;
    }
    
    ct = digits - ct;
    while(ct--)
        num /= 10;
    // return left ct digits
    return num;

}

// This function returns a pointer to a new string
// consisting of the first n characters in the str string.
char * left(const char *str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n + 1];

    int i;

    for(i = 0; i < n && str[i]; i++)
        // copy characters
        p[i] = str[i];

    while(i <= n)
        // set rest of string to '\0'
        p[i++] = '\0';

    return p;
}
