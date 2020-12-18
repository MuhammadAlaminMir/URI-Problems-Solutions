/*  In this problem, the task is to read a code of a product 1, the number of units of product 1, 
the price for one unit of product 1, the code of a product 2,
 the number of units of product 2 and the price for one unit of product 2.
 After this, calculate and show the amount to be paid.*/

#include <stdio.h>

int main()
{
    short prod1, prod2, pUnit1, pUnit2;
    float price1, price2, total;
    scanf("%hi %hi %f", &prod1, &pUnit1, &price1);
    scanf("%hi %hi %f", &prod2, &pUnit2, &price2);
    total = (price1 * pUnit1) + (price2 * pUnit2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}