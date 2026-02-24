#include <stdio.h>
#include <stdlib.h>

int day = 24;
static int year = 2026;

int main(int argc, const char **argv)
{
    printf("In main(), day = %d, &day = %p\n",day, &day);
    printf("In main(), year = %d, &year = %p\n",year, &year);

    int day = 60;
    static int year = 2024;

    printf("In main(), day = %d, &day = %p\n",day, &day);
    printf("In main(), year = %d, &year = %p\n",year, &year);

    {
        printf("In main(), day = %d, &day = %p\n",day, &day);
        printf("In main(), year = %d, &year = %p\n",year, &year);

        int day = 50;
        static int year = 2025;
        
        printf("In main(), day = %d, &day = %p\n",day, &day);
        printf("In main(), year = %d, &year = %p\n",year, &year);
    }
    
    printf("In main(), day = %d, &day = %p\n",day, &day);
    printf("In main(), year = %d, &year = %p\n",year, &year);

    return EXIT_SUCCESS;
}

// 作用域与生命周期：同一个文件下允许存在多个同名变量名，这取决于他们必须处于不同作用域。
// 变量拥有不同的生命周期，全局变量、静态变量自程序开始至程序结束，一直都在。自动变量的生命周期仅为函数一次执行的时间，自函数开始至结束即被释放。