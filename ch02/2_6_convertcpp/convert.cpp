// convert.cpp -- converts stone to pounds

#include <iostream>

// function prototype
int stonetolb(int num);

int main(int argc, const char **argv)
{
    using namespace std;

    int stone;

    cout << "Enter the weight in stone: ";
    cin >> stone;

    int pounds = stonetolb(stone);

    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return EXIT_SUCCESS;
}

int stonetolb(int sts)
{
    return 14 * sts;
}

/*
 * stone 石头；宝石；矿石
 * pound 英镑；镑
 * convert 换算
*/
