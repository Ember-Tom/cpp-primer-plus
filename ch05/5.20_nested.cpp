// nested.cpp -- nested loops and 2-D array

#include <iostream>

const int CITIES = 5;
const int YEARS = 4;

int main(int argc, const char **argv)
{
    using namespace std;

    // array of pointers
    const char * cities[CITIES] = 
    {   // to 5 strings
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    // 2-D array
    int max_temps[YEARS][CITIES] = 
    {
        // values for max_temps[0]
        {96, 100, 87, 101, 105},
        // values for max_temps[1]
        {96, 98, 91, 107, 104},
        // values for max_temps[2]
        {97, 101, 93, 108, 107},
        // values for max_temps[3]
        {98, 103, 95, 109, 108}
    };

    cout << "Maximum temperatures for 2008 - 2011\n\n";

    for(int city = 0; city < CITIES; ++city)
    {
        cout << cities[city] << ":\t";
        
        for(int year = 0; year < YEARS; ++year)
        {
            cout << max_temps[year][city] << "\t";
        }

        cout << endl;
    }

    return EXIT_SUCCESS;
}