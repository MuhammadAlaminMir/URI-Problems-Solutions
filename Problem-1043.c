/* Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, 
calculate the perimeter of the triangle and print the message:

Perimetro = XX.X

If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:

Area = XX.X */
#include <stdio.h>

int main()
{

    float a, b, c, area;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("Perimetro = %.1f\n", a + b + c);
    }
    else
    {
        area = ((a + b) / 2) * c;

        printf("Area = %.1f\n", area);
    }

    return 0;
}