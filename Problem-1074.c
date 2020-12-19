/* Read an integer value N. After, read these N values and print a message for each value saying if this
 value is odd, even, positive or negative. In case of zero (0), although the correct description would be
 "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes. */
#include <stdio.h>
int main()
{

    int N, X;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)

    {
        scanf("%d", &X);
        if (X == 0)
        {
            printf("NULL\n");
        }

        else if (X % 2 == 1 || X % 2 == -1)
        {

            if (X > 0)
            {
                printf("ODD POSITIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else
        {
            if (X > 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("EVEN NEGATIVE\n");
            }
        }
    }

    return 0;
}