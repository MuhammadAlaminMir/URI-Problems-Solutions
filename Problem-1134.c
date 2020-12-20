/* A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied
 (coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). 
If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. The program will end when the inserted code is the number 4. */

#include <stdio.h>

int main()
{
    short n, A = 0, G = 0, D = 0;
    while (n != 4)
    {
        scanf("%hi", &n);
        if (n == 1)
            A++;
        else if (n == 2)
            G++;
        else if (n == 3)
            D++;
        else if (n == 4)
            break;
        else
            continue;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", A);
    printf("Gasolina: %d\n", G);
    printf("Diesel: %d\n", D);
    return 0;
}