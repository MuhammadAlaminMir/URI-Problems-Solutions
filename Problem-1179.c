/*  n this problem you need to read 15 numbers and must put them into two different arrays: par if the number is even or impar if this number is odd. 
But  the size of each of the two arrrays is only 5 positions. So every time you fill one of two arrays, you must print the entire array to be able to use it again for the next numbers that are read. At the end,
 all remaining numbers of each one of these two arrays must be printed beggining with the odd array. Each array can be filled how many times are necessary.*/

#include <stdio.h>
int main()
{
    int a, b, c = 0, d, e, f, g, h, i, j, l = 0, m = 0, x = 0, n, p, par[5], impar[5], ara[15];
    for (b = 0; b < 15; b++)
        scanf("%d", &ara[b]);
    for (a = 0; a < 15; a++)
    {
        if (l == 5)
        {
            for (n = 0; n < 5; n++)
                printf("impar[%d] = %d\n", n, impar[n]);
            l = 0;
        }
        if (m == 5)
        {
            for (p = 0; p < 5; p++)
                printf("par[%d] = %d\n", p, par[p]);
            m = 0;
        }

        if (ara[a] % 2 != 0)
        {
            impar[c] = ara[a];
            ++c;
            l++;
            if (c == 5)
                c = 0;
        }
        if (ara[a] % 2 == 0)
        {
            par[x] = ara[a];
            ++x;
            m++;
            if (x == 5)
                x = 0;
        }
    }
    for (i = 0; i < l; i++)
        printf("impar[%d] = %d\n", i, impar[i]);
    for (j = 0; j < m; j++)
        printf("par[%d] = %d\n", j, par[j]);
    return 0;
}
