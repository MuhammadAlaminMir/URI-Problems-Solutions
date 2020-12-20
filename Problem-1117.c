/*Write a program that reads two scores of a student. Calculate and print the average of these scores.
 Your program must accept just valid scores [0..10]. Each score must be validated separately.  */
#include <stdio.h>

int main()
{
    double x, y, avg, temp = 0;

    while (1)
    {
        if (temp == 0)
        {
            scanf("%lf", &x);
        }

        if (x < 0 || x > 10)
        {
            printf("nota invalida\n");
            continue;
        }
        temp = x;
        scanf("%lf", &y);

        if (y < 0 || y > 10)
        {
            printf("nota invalida\n");
            continue;
        }
        avg = (x + y) / 2;
        printf("media = %.2lf\n", avg);
        break;
    }

    return 0;
}
