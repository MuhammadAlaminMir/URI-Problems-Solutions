/* Read the start time and end time of a game, in hours. Then calculate the duration of the game, 
knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours.
 The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)” */
#include <stdio.h>

int main()
{

    short start, end, duration = 24;
    scanf("%hi %hi", &start, &end);
    if (start > end)
    {
        duration = (24 - start) + end;
    }
    else if (start < end)
    {
        duration = (end - start);
    }
    printf("O JOGO DUROU %hi HORA(S)\n", duration);

    return 0;
}