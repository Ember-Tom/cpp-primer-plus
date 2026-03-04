// stock20.h -- augmented version

#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

// class declaration
class Stock 
{
private:

    std :: string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
// two constructores
    // default constructor
    Stock();
    Stock(const std :: string & co, long n = 0, double pr = 0.0);
    // noisy destructor
    ~Stock();

//  void acquire(const std :: string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};

#endif