/* Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, 
so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, 
based on the following cases always writing an appropriate message:

if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES */
#include <stdio.h>

int main()
{

    double arr[3];
    scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);
    short size = sizeof(arr) / 8;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                short temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (arr[0] >= arr[1] + arr[2])
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (arr[0] * arr[0] == arr[1] * arr[1] + arr[2] * arr[2])
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (arr[0] * arr[0] > arr[1] * arr[1] + arr[2] * arr[2])
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (arr[0] * arr[0] < arr[1] * arr[1] + arr[2] * arr[2])
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (arr[0] == arr[1] && arr[2] == arr[1] && arr[0] == arr[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ((arr[0] == arr[1] && arr[0] != arr[2] || arr[0] == arr[1] && arr[1] != arr[2]) || (arr[2] == arr[1] && arr[2] != arr[0] || arr[2] == arr[1] && arr[1] != arr[0]) || (arr[2] == arr[0] && arr[2] != arr[1] || arr[2] == arr[0] && arr[2] != arr[1]))
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}