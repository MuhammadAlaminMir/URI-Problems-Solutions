/* Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2. */
#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, N, (i * N));
    }

    return 0;
}