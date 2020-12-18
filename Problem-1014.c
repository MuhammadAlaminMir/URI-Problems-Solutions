/* Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters). */
#include <stdio.h>

int main()
{
    int a;
    double b;

    scanf("%d %lf", &a, &b);

    printf("%.3lf km/l\n", a / b);

    return 0;
}