/* Read 6 values that can be floating point numbers. After, print how many of them were positive. 
In the next line, print the average of all positive values typed, with one digit after the decimal point. */
#include <stdio.h>

int main()
{

    float a, b, c, d, e, f, tpos = 0;
    short pos = 0;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    if (a > 0)
    {
        pos++;
        tpos += a;
    }
    if (b > 0)
    {
        pos++;
        tpos += b;
    }
    if (c > 0)
    {
        pos++;
        tpos += c;
    }
    if (d > 0)
    {
        pos++;
        tpos += d;
    }
    if (e > 0)
    {
        pos++;
        tpos += e;
    }
    if (f > 0)
    {
        pos++;
        tpos += f;
    }

    printf("%hi valores positivos\n", pos);
    printf("%.1f\n", (tpos / pos));

    return 0;
}