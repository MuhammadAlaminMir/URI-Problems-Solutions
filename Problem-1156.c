/* Write an algorithm to calculate and write the value of S, S being given by:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/? */

#include <stdio.h>
int main()
{
    double i, c, S = 0, temp = 1;
    for (i = 1; i <= 39; i += 2)
    {

        c = i / temp;
        S += c;
        temp *= 2;
    }
    printf("%.2lf\n", S);
    return 0;
}
