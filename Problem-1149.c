/* Write an algorithm to read a value A and a value N. Print the sum of N numbers from A (inclusive).
 While N is negative or ZERO, a new N (only N) must be read. All input values are in the same line. */

#include <stdio.h>

int main()
{
    int A, N, res = 0;

    scanf("%d %d", &A, &N);
    while (N <= 0)
    {
        scanf("%d", &N);
    }

    for (short i = 1; i <= N; i++)
    {
        res += (A);
        A++;
    }

    printf("%d\n", res);

    return 0;
}