// ptr_str.cpp -- using pointers to strings

#include <iostream>
// declare strlen(), strcpy()
#include <cstring>

int main(int argc, const char **argv)
{
    using namespace std;

    // animal holds bear
    char animal[20] = "bear";
    // bird holds address of string
    const char * bird = "wren";
    // uninitialized
    char * ps;

    // display bear
    cout << animal << " and ";
    // display wren
    cout << bird << "\n";
    // cout << ps << "\n";  // may display garbage, may cause a crash

    cout << "Enter a kind of animal: ";
    // ok if input < 20 chars
    cin >> animal;
    // cin >> ps; Too horrible a blunder to try; ps doesn't
    //            point to allocated space

    // set ps to point to string
    ps = animal;
    // ok, same as using animal
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    
    // get new storage
    ps = new char[strlen(animal) + 1];
    // copy string to new storage
    strcpy(ps, animal);

    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    delete [] ps;

    return EXIT_SUCCESS;
}
