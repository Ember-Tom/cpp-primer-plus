#include <iostream>

using namespace std;

class Hello
{
public:
    void sayHello();
};

void Hello::sayHello()
{
    cout << "Hello Wrold!" << endl;
}

int main(int argc, char const **argv)
{
    Hello hello;
    hello.sayHello();

    return EXIT_SUCCESS;
}
