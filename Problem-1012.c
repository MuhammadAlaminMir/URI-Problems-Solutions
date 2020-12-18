/* Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B. */
#include <stdio.h>

int main()
{

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n", (0.5 * A * C));
    printf("CIRCULO: %.3lf\n", (3.14159 * C * C));
    printf("TRAPEZIO: %.3lf\n", (0.5 * (A + B) * C));
    printf("QUADRADO: %.3lf\n", (B * B));
    printf("RETANGULO: %.3lf\n", (A * B));

    return 0;
}