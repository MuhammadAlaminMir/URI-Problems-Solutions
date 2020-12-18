/* Read an integer value, which is the duration in seconds of a certain event in a factory, 
and inform it expressed in hours:minutes:seconds. */
#include <stdio.h>

int main()
{
    int N, hour, minutes, second;
    scanf("%d", &N);
    hour = N / 3600;
    int temp = N % 3600;
    minutes = temp / 60;
    second = N % 60;
    printf("%d:%d:%d\n", hour, minutes, second);

    return 0;
}