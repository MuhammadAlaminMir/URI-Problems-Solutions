/* Read an integer number that is the code number for phone dialing. Then, print the destination according to the following table:

<sorry I can't import the table. please watch it at uri online judge>

If the input number isn’t found in the above table, the output must be:
DDD nao cadastrado
That means “DDD not found” in Portuguese language. */
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    switch (num)
    {
    case 61:
        printf("Brasilia\n");
        break;
    case 71:
        printf("Salvador\n");
        break;
    case 11:
        printf("Sao Paulo\n");
        break;
    case 21:
        printf("Rio de Janeiro\n");
        break;
    case 32:
        printf("Juiz de Fora\n");
        break;
    case 19:
        printf("Campinas\n");
        break;
    case 27:
        printf("Vitoria\n");
        break;
    case 31:
        printf("Belo Horizonte\n");
        break;
    default:
        printf("DDD nao cadastrado\n");
    }
    return 0;
}