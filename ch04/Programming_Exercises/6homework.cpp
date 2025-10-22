/*

6．结构CandyBar包含3个成员，如编程练习5所示。请编写一个程
序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择
的值，然后显示每个结构的内容。

*/

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
