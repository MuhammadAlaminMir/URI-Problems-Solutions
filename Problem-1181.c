/* Your job in this problem is to read a number that is a line of an array, an uppercase character, indicating the operation to be performed and all elements of a bidimentional array M[12][12]. 
Then, you have to calculate and print the sum or average of all elements within the green area according to the case. 
The following figure illustrates the case when is entered the number 2 to the array line, showing all elements that must be considered in the operation. */

#include <stdio.h>

int main()
{

    char C[2];
    double N[12][12], sum = 0.0;
    int i, j, k, R;
    scanf("%d %s", &R, &sum);
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 11; j)
        {
            scanf("%lf", &N[i][j]);
            if (i == R)

                sum += N[R][k];
        }
    }

    if (C[0] == 'S')
    {
        printf("%.1lf", sum);
    }
    else if (C[0] == 'M')
    {
        printf("%.1lf", sum / 12);
    }

    return 0;
}