// usetime0.cpp -- using the first draft of the Time class
// compile usetime0.cpp and mytime0.cpp together

#include <iostream>
#include "mytime3.h"

int main(int argc, const char **argv)
{
    using std :: cout;
    using std :: endl;

    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Toseca:\n";
    cout << aida << "; " << tosca << endl;

    // operator+()
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    
    // member operator*()
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

    return EXIT_SUCCESS;
}