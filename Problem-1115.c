/* Write a program to read the coordinates (X, Y) of an indeterminate number of points in Cartesian system. For each point write the quadrant to which it belongs.
 The program finish when at least one of two coordinates is NULL (in this situation without writing any message). */

#include <stdio.h>

int main()
{

    int x, y;
    while (1)
    {
        scanf("%d %d", &x, &y);
        if (x == 0 || y == 0)
        {
            break;
        }
        else if (x > 0 && y > 0)
            printf("primeiro\n");
        else if (x > 0 && y < 0)
            printf("quarto\n");
        else if (x < 0 && y < 0)
            printf("terceiro\n");
        else if (x < 0 && y > 0)
            printf("segundo\n");
    }
    return 0;
}