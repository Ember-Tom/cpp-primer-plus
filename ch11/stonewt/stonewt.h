// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
private:
    // pounds per stone
    enum
    {
        Lbs_per_stn = 14
    };
    // whole stones
    int stone;
    // fractional pounds
    double pds_left;
    // entire weight in pounds
    double pounds;
public:
    // constructor for double pounds
    Stonewt(double lbs);
    // constructor for stone, lbs
    Stonewt(int stn, double lbs);
    // default constructor
    Stonewt();
    ~Stonewt();
    // show weight in pounds format
    void show_lbs() const;
    // show weight in stone format
    void show_stn() const;
};
#endif