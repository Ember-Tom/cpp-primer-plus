/*

8．完成编程练习7，但使用new来为结构分配内存，而不是声明一
个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼
的直径。

8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.

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

    Pizza *pza = new Pizza;

    cout << "Enter the diameter of pizza: ";
    cin >> pza -> diameter;
    cin.get();
    cout << "Enter the company name of pizza: ";
    cin.getline(pza -> name, 30);
    cout << "Enter the weight of pizza: ";
    cin >> pza -> weight;    

    cout << "Company name: " << pza -> name << endl;
    cout << "Diameter: " << pza -> diameter << endl;
    cout << "Weight: " << pza -> weight << endl;

    delete pza;

    return EXIT_SUCCESS;
}


/*
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
*/

