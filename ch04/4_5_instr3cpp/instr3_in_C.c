#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv)
{
    const int AriSize = 20;
    char name[AriSize];
    char dessert[AriSize];

    printf("Enter your name:\n");
    // read string, newline;
    fgets(name, AriSize, stdin);
    printf("Enter your favorite dessert:\n");
    fgets(dessert, AriSize, stdin);

    if(name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }
    if(dessert[strlen(dessert) - 1] == '\n')
    {
        dessert[strlen(dessert) - 1] = '\0';
    }
    printf("I have some delicious %s for you, %s.\n",dessert,name);

    return EXIT_SUCCESS;    
}
