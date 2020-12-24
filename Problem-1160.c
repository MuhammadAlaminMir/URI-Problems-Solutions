
#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    int PA, PB, Y = 0;
    float G1, G2;
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        while (PA <= PB)
        {
            PA = PA + ((PA * G1) / 100);
            PB = PB + ((PB * G2) / 100);
            Y++;
            if (Y > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (Y <= 100)
        {
            printf("%d anos.\n", Y);
        }
        Y = 0;
    }

    return 0;
}