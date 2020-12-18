/* Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . 
The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.

Tip: Use (4/3.0) or (4.0/3) in your formula, because some languages (including C++) assume that the division's 
result between two integers is another integer. :) */
#include <math.h>
#include <stdio.h>
int main()
{
    long long int R;
    double Pi;
    Pi = 3.14159;
    scanf("%lli", &R);
    R = pow(R, 3);
    double result = (4.0 / 3) * Pi * R;
    printf("VOLUME = %.3lf\n", result);

    return 0;
}