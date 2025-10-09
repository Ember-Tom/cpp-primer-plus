/*
 *3．编写一个C++程序，它使用3个用户定义的函数（包括main()），并生成下面的输出：
 *Three blind mice
 *Three blind mice
 *See how they run
 *See how they run 
 *其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余的输出。
*/

#include <iostream>

void mice(void);
void They_run(void);

int main(int argc, const char **argv)
{
    using namespace std;

    mice();
    They_run();

    return EXIT_SUCCESS;
}

void mice(void)
{
    using namespace std;

    cout << "Three blind mice\n";
}

void They_run(void)
{
    using namespace std;

    cout << "See how they run\n";
}
