/* Read two integer values X and Y. 
Print the sum of all odd values between them. */
#include <stdio.h>

int main()
{
    int x, y, sum = 0, i;
    int max, min;

    scanf("%d %d", &x, &y);
    if (x > y)
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }
    for (i = min + 1; i < max; i++)
    {
        if (i % 2 == 1 || i % 2 == -1)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}