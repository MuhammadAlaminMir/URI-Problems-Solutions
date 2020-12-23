/*Write a program that reads an integer N (1 < N < 1000). This N is the number of output lines printed by this program.  */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (short i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", (i), (i * i), (i * i * i));
    }

    return 0;
}