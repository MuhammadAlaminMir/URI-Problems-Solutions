/* Write a program that reads a number N. This N is the size of a array X[N]. Next, read each of the numbers of X,
 find the smallest element of this array and its position within the array, printing this information. */

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int X[N], smallest, pos;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }
    smallest = X[0];
    for (int i = 0; i < N; i++)
    {
        if (X[i] < smallest)
        {
            smallest = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", smallest);
    printf("Posicao: %d\n", pos);

    return 0;
}