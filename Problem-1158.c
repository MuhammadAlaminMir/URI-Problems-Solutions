/* Read an integer N that is the number of test cases that follows. Each test case contains two integers X and Y. 
Print one output line for each test case that is the sum of Y odd numbers from X including it if is the case. For example:
for the input 4 5, the output must be 45, that is: 5 + 7 + 9 + 11 + 13
for the input 7 4, the output must be 40, that is: 7 + 9 + 11 + 13 */

#include <stdio.h>

int main()
{
    int N, X, Y, sum, C;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        C = 1;
        sum = 0;
        scanf("%d %d", &X, &Y);
        for (int j = X; C <= Y; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
                C++;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}