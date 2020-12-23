/* Read a number and make a program which puts this number in the first position of an array N[10]. 
In each subsequent position, put the double of the previous position. 
For example, if the input number is 1, the array numbers ​​must be 1,2,4,8, and so on. */

#include <stdio.h>

int main()
{

    int X, N[10];
    scanf("%d", &X);
    N[0] = X;
    for (int i = 1; i < 10; i++)
    {
        N[i] = N[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
