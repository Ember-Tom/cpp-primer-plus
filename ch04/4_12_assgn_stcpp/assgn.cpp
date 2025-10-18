// assgn_st.cpp -- assigning structure

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char **argv)
{
    using namespace std;

    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };

    inflatable choice;

    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    // assign one structure to another
    choice = bouquet;
    
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    return EXIT_SUCCESS;
}