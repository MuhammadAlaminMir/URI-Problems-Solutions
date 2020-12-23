/* Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1. */

#include <stdio.h>

int main()
{
    int X, res;

    scanf("%d", &X);
    res = X;
    for (short i = X - 1; i >= 1; i--)
    {
        res *= i;
    }
    printf("%d\n", res);

    return 0;
}