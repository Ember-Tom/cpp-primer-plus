/*
5．假设要销售《C++ For Fools》一书。请编写一个程序，输入全
年中每个月的销售量（图书数量，而不是销售额）。程序通过循环，使
用初始化为月份字符串的char *数组（或string对象数组）逐月进行提
示，并将输入的数据储存在一个int数组中。然后，程序计算数组中各元
素的总数，并报告这一年的销售情况。
*/

#include <iostream>

const int MONTH = 12;
const int SALES = 1;

int main(int argc, const char **argv)
{
    using namespace std;

    const char * Book[MONTH] = 
    {
        "January sales were: ",
        "February sales were: ",
        "March sales were: ",
        "April sales were: ",
        "May sales were: ",
        "June sales were: ",
        "July sales were: ",
        "August sales were: ",
        "September sales were: ",
        "October sales were: ",
        "November sales were: ",
        "December sales were: "
    };

    int Book_Sales[MONTH][SALES];

    int sum;

    for(int i = 1; i < (MONTH + 1); i++)
    {
        cout << (char *)Book[i - 1] << "\t";
        cin >> Book_Sales[i - 1][SALES - 1];
        //cout << (char *)Book[i - 1] << "\t" << Book_Sales[i - 1][SALES - 1] << "\t" << endl;
        sum += Book_Sales[i - 1][SALES - 1];
    }

    cout << "All sales in the year is " << sum << " book.\t\n";

    return EXIT_SUCCESS;
}
