// arr_fun3.cpp -- array functions and const

#include <iostream>

const int MAX = 5;

// function prototypes
int fill_array(double ar[], int limit);
// don't change data
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(int argc, const char **argv)
{
    using namespace std;

    double properties[MAX];

    int size = fill_array(properties, MAX);

    show_array(properties, size);

    if(size > 0)
    {
        cout << "Enter revaluation factor: ";

        double factor;

        // bad input
        while(! (cin >> factor))
        {
            cin.clear();

            while(cin.get() != '\n')
            {
                continue;
            }

            cout << "Bad input; Please enter a number: ";
        }

        revalue(factor, properties, size);

        show_array(properties, size);
    }

    cout << "Done.\n";
    cin.get();
    cin.get();

    return EXIT_SUCCESS;
}

int fill_array(double ar[], int limit)
{
    using namespace std;

    double temp;
    int i;

    for(i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;

        // bad input
        if(! cin)
        {
            cin.clear();

            while(cin.get() != '\n')
            {
                continue;
            }

            cout << "Bad input; input process terminated.\n";
            
            break;
        }       // signal to terminate
        else if(temp < 0)
        {
            break;
        }

        ar[i] = temp;
    }

    return i;
}

// the following function can use, but not alter,
// the array whoes address is ar
void show_array(const double ar[], int n)
{
    using namespace std;

    for(int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        ar[i] *= r;
    }
}
