/* Using the following table, write a program that reads a code and the amount of an item. After, 
print the value to pay. This is a very simple program with the only intention of practice of selection commands. */
#include <stdio.h>

int main()
{
    short x, y;
    float arr[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%hi %hi", &x, &y);
    float result = arr[x - 1] * y;
    printf("Total: R$ %.2f\n", result);

    return 0;
}