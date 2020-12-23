/* The Federação Gaúcha de Futebol invited you to write a program to present a statistical result of several GRENAIS. 
Write a program that read the number of goals scored by Inter and the number of goals scored by Gremio in a GRENAL. Write the message 
"Novo grenal (1-sim 2-nao)" and request a response. If the answer is 1, two new numbers must be read (another input case) asking the number
 of goals scored by the teams in a new departure, otherwise the program must be finished, printing:

- How many GRENAIS were part of the statistics.
- The number of victories of Inter.
- The number of victories of Gremio.
- The number of Draws.
- A message indicating the team that won the largest number of GRENAIS (or the message: "Não houve vencedor" if both team won the same quantity of GRENAIS). */
#include <stdio.h>

int main()
{
    int a, b, c, mas = 0, in = 0, gr = 0, d = 0;

    while (1)
    {
        scanf("%d %d", &a, &b);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &c);
        mas++;
        if (a > b)
        {
            in++;
        }
        else if (b > a)
        {
            gr++;
        }
        else
        {
            d++;
        }
        if (c == 1)
        {

            continue;
        }
        else if (c == 2)
        {
            printf("%d grenais\n", mas);
            printf("Inter:%d\n", in);
            printf("Gremio:%d\n", gr);
            printf("Empates:%d\n", d);
            if (a > b)
            {
                printf("Inter venceu mais\n");
            }
            else if (a > b)
            {
                printf("Gremio venceu mais\n");
            }
            else
            {
                printf("Não houve vencedor\n");
            }
            break;
        }
    }

    return 0;
}