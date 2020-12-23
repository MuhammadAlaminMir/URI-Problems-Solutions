
/*   A Prime Number is a number that is divisible only by 1 (one) and by itself. For example the number 7 is Prime, because it can be divided only by 1 and by 7.*/

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
        if (D == 1)
        {
            printf("%d eh primo\n", X);
        }
        else
        {

            printf("%d nao eh primo\n", X);
        }
    }

    return 0;
}