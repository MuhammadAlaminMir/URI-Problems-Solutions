/* Read an integer value X and print the 6 consecutive odd numbers from X, 
a value per line, including X if it is the case. */

#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        x++;
    }
    printf("%d\n", x);
    x += 2;
    printf("%d\n", x);
    x += 2;
    printf("%d\n", x);
    x += 2;
    printf("%d\n", x);
    x += 2;
    printf("%d\n", x);
    x += 2;
    printf("%d\n", x);
}