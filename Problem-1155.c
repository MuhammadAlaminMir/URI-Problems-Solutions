/* Write an algorithm to calculate and write the value of S, S being given by:
S = 1 + 1/2 + 1/3 + … + 1/100 */

#include <stdio.h>
int main()
{
    double a, c, S = 0;
    for (a = 1; a <= 100; a++)
    {
        c = 1 / a;
        S += c;
    }
    printf("%.2lf\n", S);
    return 0;
}
