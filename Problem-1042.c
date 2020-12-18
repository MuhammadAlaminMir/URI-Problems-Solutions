/* Read three integers and sort them in ascending order. After, print these values in ascending order,
 a blank line and then the values in the sequence as they were readed. */
#include <stdio.h>

int main()
{

    int array[3], a[3];
    int i, j, temp;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
        a[i] = array[i];
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {

            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}