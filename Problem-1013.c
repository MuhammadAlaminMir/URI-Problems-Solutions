/* Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior".
 Use the following formula: MaiorAB = (a+b+abs(a-b)) / 2;

 */
#include <stdio.h>

int main()
{

    short A, B, C;
    scanf("%hi %hi %hi", &A, &B, &C);
    if (A > B && A > C)
    {
        printf("%hi eh o maior\n", A);
    }
    else if (B > C)
    {
        printf("%hi eh o maior\n", B);
    }
    else
    {
        printf("%hi eh o maior\n", C);
    }

    return 0;
}