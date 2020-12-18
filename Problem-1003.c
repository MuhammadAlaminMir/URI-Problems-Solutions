/* Read two integer values, in this case, the variables A and B. After this, 
calculate the sum between them and assign it to the variable SOMA. Write the value of this variable. */
#include <stdio.h>

int main()
{

    short A, B;
    scanf("%hi %hi", &A, &B);
    short SOMA = A + B;
    printf("SOMA = %hi\n", SOMA);

    return 0;
}