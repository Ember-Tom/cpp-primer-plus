// refactor_outfile.cpp -- to refactor outfile.cpp

#include <iostream>
// for file I/O
#include <fstream>

using namespace std;

const int SIZE = 50;

struct car_info
{
    char automobile[SIZE];
    int year;
    double a_price;
    double d_price;
};

void input(car_info &info);
void output(ostream &out, car_info &info);

int main(int argc, const char **argv)
{
    car_info info;
    // create object for output
    ofstream outFile;

    input(info);
    // display information on screen with cout
    output(cout, info);

    // associate with a file
    outFile.open("TheCarInfo.txt");
    // now do exact same things using outFile instead of count
    output(outFile, info);
    // done with file
    outFile.close();

    return EXIT_SUCCESS;
}

void input(car_info &info)
{
    cout << "Enter the make and model of automobile: ";
    cin.getline(info.automobile, SIZE);
    cout << "Enter the model year: ";
    cin >> info.year;
    cout << "Enter the original asking price: ";
    cin >> info.a_price;

    info.d_price = 0.913 * info.a_price;
}

void output(ostream &out, car_info &info)
{
    out << fixed;
    out.precision(2);
    out.setf(ios_base::showpoint);
    out << "Make and model: " << info.automobile << endl;
    out << "Year: " << info.year << endl;
    out << "Was asking $" << info.a_price << endl;
    out << "Now asking $" << info.d_price << endl;
}