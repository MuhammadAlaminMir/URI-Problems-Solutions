/* In this problem, your task is to read an array A[100]. At the end, print all array positions that store a number less or equal to 10 and the number stored in that position. */

#include <stdio.h>

int main()
{

    double N[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%lf", &N[i]);
    }
    for (int i = 0; i < 100; i++)
    {
        if (N[i] <= 10)
        {
            printf("A[%d] = %.1lf\n", i, N[i]);
        }
    }

    return 0;
}