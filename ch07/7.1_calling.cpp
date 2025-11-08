// calling.cpp -- defining, prototyping, and calling a function

#include <iostream>

// function prototype
void simple(void);

int main(int argc, const char **argv)
{
    using namespace std;

    cout << "main() will call the simple() function:\n";

    // function call
    simple();

    cout << "main() is finished with the simple() function.\n";

    return EXIT_SUCCESS;
}

// function definition
void simple(void)
{
    using namespace std;

    cout << "I'm but a simple function.\n";
}
