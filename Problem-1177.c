/*Write a program that reads a number T and fill a vector N[1000] with the numbers from 0 to T-1 repeated times, like as the example below.  */

#include <stdio.h>

int main()
{
    int T, N[10], Y = 0;
    scanf("%d", &T);
    for (int i = 0; i < 10; i++)
    {

        printf("N[%d] = %d\n", i, Y);
        Y++;
        if (T == Y)
        {
            Y = 0;
        }
    }

    return 0;
}