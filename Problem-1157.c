/* Read an integer N and compute all its divisors. */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 || n % i == n)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}