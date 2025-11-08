/*
6．完成编程练习5，但这一次使用一个二维数组来存储输入—3年中每个月的销售量。程序将报告每年销售量以及三年的总销售量。
*/

#include <iostream>

const int MONTH = 12;
const int YEARS = 3;
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

    for(int j = 1; j < (YEARS + 1); j++)
    {
        cout << "The " << j << " years.\n";

        for(int i = 1; i < (MONTH + 1); i++)
        {
            cout << (char *)Book[i - 1] << "\t";
            cin >> Book_Sales[i - 1][SALES - 1];
            //cout << (char *)Book[i - 1] << "\t" << Book_Sales[i - 1][SALES - 1] << "\t" << endl;
            sum += Book_Sales[i - 1][SALES - 1];
        }
    }

    cout << "All sales in the year is " << sum << " book.\t\n";

    return EXIT_SUCCESS;
}

/*
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
        cout << (char *)Book[i - 1] << "\t" << Book_Sales[i - 1][SALES - 1] << "\t" << endl;
        sum += Book_Sales[i - 1][SALES - 1];
    }

    cout << "All sales in the year is " << sum << " book.\t\n";

    return EXIT_SUCCESS;
}
*/