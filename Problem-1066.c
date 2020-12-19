/* Make a program that reads five integer values. Count how many   of these values are
 even, odd, positive and negative. Print these information like following example. */
#include <stdio.h>

int main()
{

    int arr[5], total_even = 0, total_odd = 0, total_pos = 0, total_neg = 0;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            total_even++;
        }
        if (arr[i] % 2 == 1 || arr[i] % 2 == -1)
        {
            total_odd++;
        }
        if (arr[i] > 0)
        {
            total_pos++;
        }
        if (arr[i] < 0)
        {
            total_neg++;
        }
    }
    printf("%d valor(es) par(es)\n", total_even);
    printf("%d valor(es) impar(es)\n", total_odd);
    printf("%d valor(es) positivo(s)\n", total_pos);
    printf("%d valor(es) negativo(s)\n", total_neg);

    return 0;
}
