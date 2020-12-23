/*  In mathematics, a perfect number is an integer for which the sum of all its own positive divisors (excluding itself) is equal to the number itself. 
For example the number 6 is perfect, because 1+2+3 is equal to 6. 
Your task is to write a program that read integer numbers and print a message informing if these numbers are perfect or are not perfect.*/

#include <stdio.h>

int main()
{
    int N, X, sum, D;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum = 0;
        D = 0;
        scanf("%d", &X);
        for (int j = 1; j <= X; j++)
        {
            if (X % j == 0)
            {
                sum += j;
            }
            D = sum - X;
        }
        if (D == X)
        {
            printf("%d eh perfeito\n", X);
        }
        else
        {

            printf("%d nao eh perfeito\n", X);
        }
    }

    return 0;
}