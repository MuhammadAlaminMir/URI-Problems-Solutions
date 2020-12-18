/* In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. 
The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes. */
#include <stdio.h>

int main()
{
    // char notes[20] = {100, 50, 20, 10, 5, 2, 1};
    short num;
    scanf("%hi", &num);
    printf("%hi\n", num);
    printf("%hi nota(s) de R$ 100,00\n", num / 100);
    num = num % 100;
    printf("%hi nota(s) de R$ 50,00\n", num / 50);
    num = num % 50;
    printf("%hi nota(s) de R$ 20,00\n", num / 20);
    num %= 20;
    printf("%hi nota(s) de R$ 10,00\n", num / 10);
    num %= 10;
    printf("%hi nota(s) de R$ 5,00\n", num / 5);
    num %= 5;
    printf("%hi nota(s) de R$ 2,00\n", num / 2);
    num %= 2;
    printf("%hi nota(s) de R$ 1,00\n", num / 1);

    return 0;
}