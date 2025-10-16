#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv)
{
    const float ritoa_dis = 0.6214;
    const float ritoa_fue = 3.875;
/*
    double fuel;
    double distance;
*/

    int fuel;
    int distance;
    double the_mpg;

    printf("Enter your mileage: ");
    scanf("%d",&distance);
    printf("Enter the amount of fuel consumed by the vehicle: ");
    scanf("%d",&fuel);

    the_mpg = (((double) distance * ritoa_dis) / ((double) fuel * ritoa_fue)) * 100;

    printf("Your car's fuel consumption is %lf mpg.\n",the_mpg);

    return EXIT_SUCCESS;
}