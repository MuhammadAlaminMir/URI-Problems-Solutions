/* Write a program that keep reading a password until it is valid. For each wrong password read, 
write the message "Senha inválida". When the password is typed correctly print the message "Acesso Permitido"
 and finished the program. The correct password is the number 2002. */
#include <stdio.h>

int main()
{
    int P;
    while (1)
    {
        scanf("%d", &P);
        if (P == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}