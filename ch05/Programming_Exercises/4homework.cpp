/*
4．Daphne以10%的单利投资了100美元。也就是说，每一年的利润
都是投资额的10%，即每年10美元：
利息 = 0.10×原始存款
而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款
（包括获得的利息）的5%，：
利息 = 0.05×当前存款
Cleo在第一年投资100美元的盈利是5%—得到了105美元。下一年
的盈利是105美元的5%—即5.25美元，依此类推。请编写一个程序，计
算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时
两个人的投资价值。
*/

#include <iostream>

// 本金
const int CORPUS = 100;
// D 利率
const double RATE_D = 0.1;
// C 利率
const double RATE_C = 0.05;

int main(int argc, const char **argv)
{
    using namespace std;

    double sum_D = CORPUS;
    double sum_C = CORPUS;

    for(int i = 1; sum_C <= sum_D; i++)
    {
        sum_D += RATE_D * CORPUS;
        sum_C += RATE_C * sum_C;

        if(sum_C > sum_D)
        {
            cout << "After " << i << " years, Cleo's assets will surpass Daphne's." << endl;
            cout << "Daphne has $" << sum_D << " and Cleo has $" << sum_C << endl;
        }
    }

    return EXIT_SUCCESS;
}