/* Make a program that prints the sequence like the following exemple. */

#include <stdio.h>

int main()
{

    short I = 1, J = 7;
    while (1)
    {

        for (short i = 0; i < 3; i++)
        {
            printf("I=%hi J=%hi\n", I, J--);
        }

        if (I == 9)
        {
            break;
        }
        I += 2;
        J += 5;
    }

    return 0;
}