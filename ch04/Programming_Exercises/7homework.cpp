/*

7．William Wingate从事比萨饼分析服务。对于每个披萨饼，他都
需要记录下列信息：

 * 披萨饼公司的名称，可以有多个单词组成。
 * 披萨饼的直径。
 * 披萨饼的重量。

请设计一个能够存储这些信息的结构，并编写一个使用这种结构变
量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用
cin（或它的方法）和cout。

*/

#include <iostream>

struct Pizza
{
    char name[30];
    double diameter;
    double weight;
};

int main(int argc, const char **argv)
{
    using namespace std;

    Pizza pizza;

    cout << "Enter the company name of pizza: ";
    cin.getline(pizza.name, 30);
    cout << "Enter the diameter of pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of pizza: ";
    cin >> pizza.weight;

    cout << "Company name: " << pizza.name << endl;
    cout << "Diameter: " << pizza.diameter << endl;
    cout << "Weight: " << pizza.weight << endl;
    
    return EXIT_SUCCESS;
}