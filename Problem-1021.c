/* Read a value of floating point with two decimal places. This represents a monetary value. After this, 
calculate the smallest possible number of notes and coins on which the value can be decomposed.
 The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. 
Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins. */
#include <stdio.h>

int main()
{
    double N;

    scanf("%lf", &N);
    int notas = N, moedas = (N - notas) * 100;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", notas / 100);
    notas = notas % 100;
    printf("%d nota(s) de R$ 50.00\n", notas / 50);
    notas = notas % 50;
    printf("%d nota(s) de R$ 20.00\n", notas / 20);
    notas = notas % 20;
    printf("%d nota(s) de R$ 10.00\n", notas / 10);
    notas = notas % 10;

    printf("%d nota(s) de R$ 5.00\n", notas / 5);
    notas = notas % 5;
    printf("%d nota(s) de R$ 2.00\n", notas / 2);
    printf("MOEDAS:\n");
    notas = notas % 2;

    printf("%d moeda(s) de R$ 1.00\n", notas / 1);
    notas = notas % 1;

    printf("%d moeda(s) de R$ 0.50\n", moedas / 50);
    moedas = moedas % 50;

    printf("%d moeda(s) de R$ 0.25\n", moedas / 25);
    moedas = moedas % 25;

    printf("%d moeda(s) de R$ 0.10\n", moedas / 10);
    moedas = moedas % 10;

    printf("%d moeda(s) de R$ 0.05\n", moedas / 5);
    moedas = moedas % 5;

    printf("%d moeda(s) de R$ 0.01\n", moedas / 1);

    return 0;
}