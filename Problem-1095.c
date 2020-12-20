/* Make a program that prints the sequence like the following example.

 */
#include <stdio.h>

int main()
{
    short I = 1, J = 60;
    while (1)
    {

        printf("I=%hi J=%hi\n", I, J);
        if (J == 0)
        {
            break;
        }
        I += 3;
        J -= 5;
    }
}