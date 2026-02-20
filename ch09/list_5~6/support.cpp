// support.cpp -- use external variable
// compile with external.cpp

#include <iostream>

// use warming from another file
extern double warming; 

// function prototypes
void update(double dt);
void local();

using std::cout;

// modifies global variable
void update(double dt)
{
    // optional redeclaration
    extern double warming;
    // uses global warming
    warming += dt;

    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

// uses local variable
void local()
{
    // new variable hides external one
    double warming = 0.8;

    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the
    // scope resolution operator
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}