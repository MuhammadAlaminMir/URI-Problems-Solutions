/* In an imaginary country called Lisarb, all the people are very happy to pay their taxes because
 they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, 
 without any misappropriation. The currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. 
Then print the due value that this person must pay of taxes, according to the table below.

<sorry I can't import the table. please watch it at uri online judge>


Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00,
 because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00,
  resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point. */
#include <stdio.h>
#include <string.h>
int main()
{
    double x, tax1, tax2, tax3;
    scanf("%lf", &x);
    if (x <= 2000.00 && x > 0)
    {
        printf("Isento\n");
    }
    else if (x <= 3000.00 && x >= 2000.01)
    {
        tax1 = ((x - 2000.00) * 8) / 100;
        printf("R$ %.2lf\n", tax1);
    }
    else if (x <= 4500.00 && x >= 3000.01)
    {
        tax1 = ((x - 3000.00) * 18) / 100;
        tax2 = (1000 * 8) / 100;
        printf("R$ %.2lf\n", (tax1 + tax2));
    }
    else if (x > 4500.00)
    {
        tax1 = ((x - 4500.00) * 28) / 100;
        tax2 = (1500 * 18) / 100;
        tax3 = (1000 * 8) / 100;
        printf("R$ %.2lf\n", (tax1 + tax2 + tax3));
    }

    return 0;
}