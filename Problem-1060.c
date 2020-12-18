/* Write a program that reads 6 numbers. 
These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers. */
#include <stdio.h>

int main()
{
    short a, b, c, d, e, f, positive_number = 0;
    scanf("%hi %hi %hi %hi %hi %hi %hi", &a, &b, &c, &d, &e, &f);
    if (a >= 0)
    {
        positive_number++;
    }
    if (b >= 0)
    {
        positive_number++;
    }
    if (c >= 0)
    {
        positive_number++;
    }
    if (d >= 0)
    {
        positive_number++;
    }
    if (e >= 0)
    {
        positive_number++;
    }
    if (f >= 0)
    {
        positive_number++;
    }
    printf("%hi valores positivos\n", positive_number);

    return 0;
}