/* Write a program that reads an array N [20]. After, change the first element by the last, 
the second element by the last but one, etc.., Up to change the 10th to the 11th. print the modified array. */

#include <stdio.h>

int main()
{

    int N[20];

    for (int i = 19; i >= 0; i--)
    {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < 20; i++)
    {

        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}