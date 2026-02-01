// swaps.cpp -- swapping with references and with pointers

#include <iostream>

// a, b are aliases for ints
void swapr(int &a, int &b);
// p, q are address for ints
void swapp(int *p, int *q);
// a, b are new variables
void swapv(int a, int b);

int main(int argc, char **argv)
{
    using namespace std;

    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    // pass variables
    swapr(wallet1, wallet2);

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    // pass addresses of variables
    swapp(&wallet1, &wallet2);

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;  
    
    cout << "Trying to use passing by value:\n";
    // pass values of variables
    swapv(wallet1, wallet2);

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;      

    return EXIT_SUCCESS;
}

// a, b are aliases for ints
void swapr(int &a, int &b)
{
    /*
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    */
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

}

// p, q are address for ints
void swapp(int *p, int *q)
{
    int temp;
    
    temp = *p;
    *p = *q;
    *q = temp;
}

// a, b are new variables
void swapv(int a, int b)
{
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}