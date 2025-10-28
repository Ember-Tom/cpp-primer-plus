/*

9．完成编程练习6，但使用new来动态分配数组，而不是声明一个
包含3个元素的CandyBar数组。

Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.

*/

#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int content;
};

int main(int argc, const char **argv)
{
    CandyBar *cad = new CandyBar[3];

    cad -> brand = "Nhao";
    cad -> weight = 12.3;
    cad -> content = 89;

    (cad + 1) -> brand = "NJUL";
    (cad + 1) -> weight = 12.6;
    (cad + 1) -> content = 243;

    (cad + 2) -> brand = "NJUL";
    (cad + 2) -> weight = 12.8;
    (cad + 2) -> content = 456;

    cout << "cad -> brand: " << cad -> brand << endl;
    cout << "cad -> weight: " << cad -> weight << endl;
    cout << "cad -> content: " << cad -> content << endl << endl;

    cout << "(cad + 1) -> brand: " << (cad + 1) -> brand << endl;
    cout << "(cad + 1) -> weight: " << (cad + 1) -> weight << endl;
    cout << "(cad + 1) -> content: " << (cad + 1) -> content << endl << endl;

    cout << "(cad + 2) -> brand: " << (cad + 2) -> brand << endl;
    cout << "(cad + 2) -> weight: " << (cad + 2) -> weight << endl;
    cout << "(cad + 2) -> content: " << (cad + 2) -> content << endl << endl;

    delete [] cad;

    return EXIT_SUCCESS;
}

/*
#include <iostream>

struct CandyBar
{
    char brand[20];
    double weight;
    int content;
};

int main(int argc, const char **argv)
{
    using namespace std;

    CandyBar snack[3];
    snack[0] = 
    {
        "Mocha Munch",
        2.3,
        350
    };
    snack[1] = 
    {
        "Munch",
        10,
        50
    };
    snack[2] = 
    {
        "Mocha",
        78.99,
        320
    };

    cout << "snack[0].Brand: " << snack[0].brand << endl;
    cout << "snack[0].Weight: " << snack[0].weight << endl;
    cout << "snack[0].Content: " << snack[0].content << endl << endl;

    cout << "snack[1].Brand: " << snack[1].brand << endl;
    cout << "snack[1].Weight: " << snack[1].weight << endl;
    cout << "snack[1].Content: " << snack[1].content << endl << endl;

    cout << "snack[2].Brand: " << snack[2].brand << endl;
    cout << "snack[2].Weight: " << snack[2].weight << endl;
    cout << "snack[2].Content: " << snack[2].content << endl << endl;

    return EXIT_SUCCESS;
}
*/