/*Write a program that reads an integer N. N * 2 lines must be printed by this program according to the example below.
 For numbers with more than 6 digits, all digits must be printed (no cientific notation allowed).  */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (short i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", (i), (i * i), (i * i * i));
        printf("%d %d %d\n", (i), (i * i) + 1, (i * i * i) + 1);
    }

    return 0;
}