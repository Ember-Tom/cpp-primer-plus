// getinfo.cpp -- input and output

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    // 胡萝卜；报酬
    int carrots;        

    cout << "How many carrots do you have?" << endl;
    // C++ input
    cin >> carrots;
    cout << "Here are two more. \n";
    carrots = carrots + 2;
    // the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl; 

    return EXIT_SUCCESS;
}