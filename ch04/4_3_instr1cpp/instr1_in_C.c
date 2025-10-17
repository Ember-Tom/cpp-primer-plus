#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv)
{
    const int AriSize = 20;
    char name[AriSize];
    char dessert[AriSize];

    printf("Enter your name:\n");
    scanf("%s",&name);
    printf("Enter your favorite dessert:\n");
    scanf("%s",&dessert);
    printf("I have some delicious %s",dessert);
    printf(" for you, %s.\n",name);

    return EXIT_SUCCESS;
}