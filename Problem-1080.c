/* Read 100 integer numbers. Print the highest read value and the input position. */
#include <stdio.h>

int main()
{
    int arr[100], i, max = 0, max_pos = 0, arr_length = 0;
    arr_length = (sizeof(arr)) / 4;
    for (i = 1; i <= arr_length; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= arr_length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_pos);

    return 0;
}