/*Write an program to read two scores of a student. Calculate and print the semester average.
 The program must accept only valid scores (a score must fit in the range [0.10]). Each score must be validated separately.

The program must print a message "novo calculo (1-sim 2-nao)" that means "new calculate (1-yes 2-no)". After, the input will be (1 or 2).
 1 means a new calculation, 2 means that the execution must be finished.  */
#include <stdio.h>

int main()
{
    double a, b, avg, temp = 0, x, y = 1;

    while (1)
    {
        y = 1;
        if (temp == 0)
        {
            scanf("%lf", &a);
        }

        if (a < 0 || a > 10)
        {
            printf("nota invalida\n");
            continue;
        }
        temp = a;
        scanf("%lf", &b);

        if (b < 0 || b > 10)
        {
            printf("nota invalida\n");
            continue;
        }
        avg = (a + b) / 2;
        printf("media = %.2lf\n", avg);
        printf("novo calculo (1-sim 2-nao)\n");
        temp = 0;
        while (y == 1)
        {

            scanf("%lf", &x);
            if (x < 1 || x > 2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            y += 2;
        }
        if (x == 2)
        {
            break;
        }
    }

    return 0;
}
