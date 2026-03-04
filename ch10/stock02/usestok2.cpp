// usestok2.cpp -- using the Stock class
// compile with stock20.cpp

#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main(int argc, const char **argv)
{
// create an array of initialized objects
    Stock stocks[STKS] = 
    {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std :: cout << "Stock holdings:\n";

    int st;

    for(st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }
// set pointer to first element
    const Stock * top = &stocks[0];
    for(st = 1; st < STKS ; st++)
    {
        top = &top -> topval(stocks[st]);
    }

// now top points to the most valuable holding
    std :: cout << "\nMost valuable holding:\n";
    top -> show();

/*
    {
        using std :: cout;

        cout << "Using constructors to create new objects\n";
        // syntax 1
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2("Boffo Objects", 2, 2.0);
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "Using constructors to reset an object\n";
        // temp object
        stock1 = Stock("Nifty Foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }
*/

/*
    Stock fluffy_the_cat;

    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show();
*/
    return EXIT_SUCCESS;
}

