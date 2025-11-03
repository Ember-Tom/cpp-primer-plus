/*
3．编写一个要求用户输入数字的程序。每次输入后，程序都将报
告到目前为止，所有输入的累计和。当用户输入0时，程序结束。
*/

#include <iostream>

int main(int argc, const char **argv)
{
    using namespace std;

    int number;
    int sum;

    do
    {
        cout << "Enter a number: ";
        cin >> number;

        sum += number;

        if(number)
        {
            cout << "Now, the sum is " << sum << endl;            
        }

    } while(number);

    cout << "The end\n";

    return EXIT_SUCCESS;
}