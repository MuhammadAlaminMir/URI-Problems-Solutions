/* Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) 
and calculate the distance between them, showing four decimal places after the comma, according to the formula:
Distance = sqrt((x*2 - x * 1 ) * (x*2 - x * 1 ) + (y * 2 - y * 1) * (y * 2 - y * 1))

*/
#include <math.h>
#include <stdio.h>

int main()
{

    double x1, x2, y1, y2, total, distance;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    total = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

    distance = sqrt(total);
    printf("%.4lf\n", distance);

    return 0;
}
