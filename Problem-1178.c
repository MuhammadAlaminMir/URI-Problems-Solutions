/*  Read a number X. Put this X at the first position of an array N [100]. 
In each subsequent position (1 up to 99) put half of the number inserted at the previous position, 
according to the example below. Print all the vector N.*/

#include <stdio.h>

int main()
{
    double N[100];
    scanf("%lf", &N[0]);

    for (short i = 1; i < 100; i++)
    {
        N[i] = N[i - 1] / 2;
    }
    for (short i = 0; i < 100; i++)
    {
        printf("N[%hi] = %.4lf\n", i, N[i]);
    }

    return 0;
}