/* Read an integer N, which represents the number of following test cases. 
Each test case consists of three floating-point numbers, each one with one digit after the decimal point.
 Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, 
 the second number has weight 3 and the third number has weight 5. */
#include <stdio.h>
int main()
{

    int N;
    float a, b, c, avg;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        avg = ((a * 2) + (b * 3) + (c * 5)) / 10;
        printf("%.1f\n", avg);
    }

    return 0;
}