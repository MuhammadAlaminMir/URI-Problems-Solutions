/*Write an algorithm to read an undeterminated number of data, each containing an individual's age. The final data, 
which will not enter in the calculations, 
contains the value of a negative age. Calculate and print the average age of this group of individuals.  */
#include <stdio.h>

int main()
{
    int n, res = 0;
    float count = 0;

    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        count++;
        res += n;
    }
    printf("%.2f\n", res / count);
    return 0;
}