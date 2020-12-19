/* Make a program that reads five integer values. Count how many of these values ​​are even and 
 print this information like the following example. */
#include <stdio.h>

int main()
{

    int arr[5], total_int = 0;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            total_int++;
        }
    }
    printf("%d valores pares\n", total_int);

    return 0;
}
