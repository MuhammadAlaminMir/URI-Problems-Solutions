/* Write a program that read two numbers X and Y and print the result of dividing the X by Y. 
If it's not possible, print the message "divisao impossivel". */

#include <stdio.h>

int main()
{

    short N;
    float X, Y, res;
    scanf("%hi", &N);
    for (short i = 0; i < N; i++)
    {
        scanf("%f %f", &X, &Y);
        if (Y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            res = X / Y;
            printf("%.1f\n", res);
        }
    }

    return 0;
}