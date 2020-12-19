/* Read an integer N. This N will be the number of integer numbers X that will be read.

Print how many these numbers X are in the interval [10,20] and how many values are out of this interval. */
#include <stdio.h>

int main()
{
    short n, x, i, in = 0, out = 0;
    scanf("%hi", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%hi", &x);
        if (x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%hi in\n", in);
    printf("%hi out\n", out);

    return 0;
}