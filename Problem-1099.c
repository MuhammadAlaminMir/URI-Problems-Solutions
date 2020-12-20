/* Read an integer N that is the number of test cases. Each test case is a line containing two integer numbers X and Y.
 Print the sum of all odd values between them, not including X and Y. */
#include <stdio.h>

int main()
{
    int N, X, Y, temp, sum = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X == Y)
        {
            printf("%d\n", sum);
        }

        else
        {
            if (X > Y)
            {
                temp = X;
                X = Y;
                Y = temp;
            }
            for (int j = X + 1; j < Y; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
            printf("%d\n", sum);

            sum = 0;
        }
    }

    return 0;
}