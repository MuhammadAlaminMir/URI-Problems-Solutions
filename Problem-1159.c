/* The program must read an integer X indefinite times (stop when X=0). For each X, print the sum of five consecutive even numbers from X,
 including it if X is even. If the input number is 4, for example, the output must be 40, that is the result of the operation: 4+6+8+10+12. 
If the input number is 11, for example, the output must be 80, that is the result of 12+14+16+18+20. */

#include <stdio.h>

int main()
{
    int X, Y, sum, C;
    while (1)
    {
        scanf("%d", &X);
        if (X == 0)
        {
            break;
        }

        C = 1;
        sum = 0;

        for (int j = X; C <= 5; j++)
        {
            if (j % 2 == 0)
            {
                sum += j;
                C++;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}