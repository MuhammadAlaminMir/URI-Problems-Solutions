/* Read four integer values named A, B, C and D. 
Calculate and print the difference of product A and B by the product of C and D (A * B - C * D). */
#include <stdio.h>

int main()
{

    short A, B, C, D, diff;
    scanf("%hi %hi %hi %hi", &A, &B, &C, &D);
    diff = (A * B - C * D);
    printf("DIFERENCA = %hi\n", diff);

    return 0;
}