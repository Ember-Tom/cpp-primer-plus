// array_C.c -- test for C as C++

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char **argv)
{
    // same, naming the type directly
    int *p1 = (int *)malloc(sizeof(int[4]));

    p1[0] = 1;
    p1[1] = 2;
    p1[2] = 3;
    p1[3] = 4;

    printf("show the number: p1[0] = %d, p1[1] = %d, p1[2] = %d, p1[3] = %d\n",p1[0],p1[1],p1[2],p1[3]);

    p1 = p1 + 1;

    printf("show the number: p1[0] = %d, p1[1] = %d, p1[2] = %d, p1[3] = %d\n",p1[0],p1[1],p1[2],p1[3]);

    p1 = p1 - 1;

    printf("show the number: p1[0] = %d, p1[1] = %d, p1[2] = %d, p1[3] = %d\n",p1[0],p1[1],p1[2],p1[3]);

    p1 = p1 + 2;

    printf("show the number: p1[0] = %d, p1[1] = %d, p1[2] = %d, p1[3] = %d\n",p1[0],p1[1],p1[2],p1[3]);

    p1 = p1 - 2;

    printf("show the number: p1[0] = %d, p1[1] = %d, p1[2] = %d, p1[3] = %d\n",p1[0],p1[1],p1[2],p1[3]);

    free(p1);

    return EXIT_SUCCESS;
}
