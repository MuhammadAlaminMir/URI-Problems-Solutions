/*Write a program that reads a number and print the Fibonacci number corresponding to this read number.
 Remember that the first elements of the Fibonacci series are 0 and 1 and each next term is the sum of the two preceding it. 
All the Fibonacci numbers calculated in this program must fit in a unsigned 64 bits number.  */

#include <stdio.h>

int main()
{
    unsigned long long T, N, a = 0, b = 1, sum = 0;

    scanf("%llu", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%llu", &N);
        if (N <= 0)
        {
            printf("Fib(%llu) = %llu\n", N, sum);
        }
        else if (N <= 1)
        {
            printf("Fib(%llu) = %llu\n", N, sum += 1);
        }
        else
        {

            for (int i = 1; i < N; i++)
            {
                sum = (a + b);
                a = b;
                b = sum;
            }
            printf("Fib(%llu) = %llu\n", N, sum);
            sum = 0;
            a = 0;
            b = 1;
        }
    }

    return 0;
}

// Or

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     long long y, a, b, c, d, n, x;
//     scanf("%lld", &n);
//     for (i = 1; i <= n; i++)
//     {
//         scanf("%lld", &x);
//         a = 0;
//         b = 1;
//         for (j = 0; j <= x; j++)
//         {
//             c = a + b;
//             d = a;
//             a = b;
//             b = c;
//             if (j == x)
//             {
//                 y = d;
//                 break;
//             }
//         }
//         printf("Fib(%lld) = %lld\n", x, y);
//     }
//     return 0;
// }