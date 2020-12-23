/* Your program must read an integer X indefinited times (the program must stop when X is equal to zero).
 For each X print the sequence from 1 to X, with one space between each one of these numbers.

PS: Be carefull. Don't leave any space after the last number of each line, otherwise you'll get Presentation Error. */

#include <stdio.h>

int main()
{
    int n = -1, r = 1;
    while (1)
    {
        if (n == -1)
        {
            scanf("%d", &n);
        }

        if (n == 0)
        {
            break;
        }
        printf("%d", r);
        if (r == n)
        {
            n = -1;
            printf("\n");
            r = 1;
            continue;
        }
        printf(" ");
        r++;
    }
    return 0;
}