/* Maria has just started as graduate student in a medical school and she's needing your help to organize a laboratory experiment which she is responsible about. 
She wants to know, at the end of the year, how many animals were used in this laboratory and the percentage of each type of animal is used at all.

This laboratory uses in particular three types of animals: frogs, rats and rabbits. To obtain this information, 
it knows exactly the number of experiments that were performed, the type and quantity of each animal is used in each experiment. */

#include <stdio.h>

int main()
{
    char animal;
    int n, rabbits = 0, rats = 0, frogs = 0, total = 0;
    double rabbitsP, ratsP, frogsP;
    scanf("%d", &n);
    int arr[n], i, arr_length;
    arr_length = sizeof(arr) / 4;
    for (i = 0; i < arr_length; i++)
    {
        scanf("%d %c", &arr[i], &animal);
        if (animal == 'C')
        {
            rabbits += arr[i];
        }
        if (animal == 'R')
        {
            rats += arr[i];
        }
        if (animal == 'S')
        {
            frogs += arr[i];
        }
        total += arr[i];
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    rabbitsP = (((float)rabbits / (float)total) * 100.00);
    ratsP = (((float)rats / (float)total) * 100.00);
    frogsP = (((float)frogs / (float)total) * 100.00);
    printf("Percentual de coelhos: %.2lf %%\n", rabbitsP);
    printf("Percentual de ratos: %.2lf %%\n", ratsP);
    printf("Percentual de sapos: %.2lf %%\n", frogsP);

    return 0;
}