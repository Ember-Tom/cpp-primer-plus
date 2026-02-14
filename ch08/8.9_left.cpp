// left.cpp -- string function with a default argument

#include <iostream>

const int AriSize = 80;

char * left(const char *str, int n = 1);

int main(int argc, const char **argv)
{
    using namespace std;

    char sample[AriSize];

    cout << "Enter a string:\n";
    cin.get(sample, AriSize);

    char *ps = left(sample, 6);
    cout << ps << endl;
    // free old string
    delete [] ps;

    ps = left(sample);
    cout << ps << endl;
    // free new string
    delete [] ps;

    return EXIT_SUCCESS;
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