// filefunc.cpp -- function with ostream & parameter

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream & os, double & fo, const double fe[], int n);

const int LIMIT = 5;

int main(int argc, const char **argv)
{
    ofstream fout;

    const char * fn = "my-data.txt";

    fout.open(fn);

    if(!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n";

        exit(EXIT_FAILURE);
    }

    double objective;

    cout << "Enter the focal length of your "
            "telescope object in mm: ";
    cin >> objective;

    double eps[LIMIT];

    cout << "Enter the focaal lengths in mm, of " << LIMIT
         << " eyepiecess:\n";
    
    for(int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiecess #" << i + 1 << ": ";
        cin >> eps[i]; 
    }

    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);

    cout << "Done\n";

    return EXIT_SUCCESS;
}

void file_it(ostream & os, double & fo, const double fe[], int n)
{
    ios_base::fmtflags initial;

    // save initial formatting state
    initial = os.setf(ios_base::fixed);

    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;

    for(int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo / fe[i] + 0.5) << endl;
    }

    // restore initial formatting state
    os.setf(initial);
}