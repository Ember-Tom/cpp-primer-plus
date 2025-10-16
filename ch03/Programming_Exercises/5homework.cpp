/*

5．编写一个程序，要求用户输入全球当前的人口和美国当前的人
口（或其他国家的人口）。将这些信息存储在long long变量中，并让程
序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出
应与下面类似：

Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.

*/

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    long long world_population;
    long long prc_population;
    double ritoa;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the PRC: ";
    cin >> prc_population;

    ritoa = ((long double) prc_population / (long double) world_population) * 100; 

    cout << "The population of the PRC is " << ritoa << "% of the world population.\n";

    return EXIT_SUCCESS;
}
