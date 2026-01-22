// ruler.cpp -- using recursion to subdivide a ruler

#include <iostream>

const int LEN = 66;
const int DIVS = 6;

void subdivide(char ar[], int low, int hght, int level);

int main(int argc, const char **argv)
{
    using namespace std;

    char ruler[LEN];

    for(int i = 1; i < LEN - 2; i++)
    {
        ruler[i] = ' ';
    }

    ruler[LEN - 1] = '\0';

    int max = LEN - 2;
    int min = 0;

    ruler[min] = ruler[max] = '|';

    cout << ruler << endl;

    for(int i = 1; i <= DIVS; i++)
    {
        subdivide(ruler, min, max, i);

        cout << ruler << endl;

        for(int j = 1; j < LEN - 2; j++)
        {
            // reset to blank ruler
            ruler[j] = ' ';
        }
    }
    
    return EXIT_SUCCESS;
}

void subdivide(char ar[], int low, int high, int level)
{
    if(level == 0)
    {
        return;
    }

    int mid = (high + low) / 2;

    ar[mid] = '|';

    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}
