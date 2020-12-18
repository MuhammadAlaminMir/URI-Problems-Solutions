/* Read two nteger values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or
 "Nao sao Multiplos" (aren’t multiples), corresponding to the read values. */
#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    if (b % a == 0 || a % b == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}