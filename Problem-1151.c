/*  The following sequence of numbers 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence. Thereafter,
 each number after the first 2 is equal to the sum of the previous two numbers. 
Write an algorithm that reads an integer N (N < 46) and that print the first N numbers of this sequence.*/
#include <stdio.h>

int main()
{
    int X, a = 0, b = 1, c;

    scanf("%d", &X);

    for (short i = 1; i <= X - 1; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", a);

    return 0;
}