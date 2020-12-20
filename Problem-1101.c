/* Read an undetermined number of pairs values M and N (stop when anN of these values is less or equal to zero).
 For each pair, print the sequence from the smallest to the biggest (including both) and the sum of consecutive 
 integers between them (including both). */
#include <stdio.h>

int main()
{
    int M, N, temp, sum = 0;

    while (1)
    {
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0)
        {
            break;
        }

        else
        {
            if (M > N)
            {
                for (int j = N; j <= M; j++)
                {
                    sum += j;
                    printf("%d ", j);
                }
                printf("Sum=%d\n", sum);
                sum = 0;
            }
            else if (M < N)
            {
                for (int j = M; j <= N; j++)
                {
                    sum += j;
                    printf("%d ", j);
                }
                printf("Sum=%d\n", sum);
                sum = 0;
            }
        }
    }

    return 0;
}