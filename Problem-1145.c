/* Write an program that reads two numbers X and Y (X < Y). After this, show a sequence of 1 to y, passing to the next line to each X numbers */

#include <stdio.h>

int main()
{
    int x, y, temp = 0;
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++)
    {
        temp++;
        printf("%d", i);
        if (temp == x || i == y)
        {
            printf("\n");
            temp = 0;
        }
        else
        {
            printf(" ");
        }
    }

    return 0;
}