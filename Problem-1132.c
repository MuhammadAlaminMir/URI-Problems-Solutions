/* Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both. */

#include <stdio.h>

int main()
{
    int a, b, temp, sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}