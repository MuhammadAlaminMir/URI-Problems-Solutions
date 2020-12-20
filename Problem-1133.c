/* Write a program that reads two integer numbers X and Y. Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3. */
#include <stdio.h>

int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a + 1; i < b; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}