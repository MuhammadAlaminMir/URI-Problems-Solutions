/*Write a program that reads an integer N. This N is the number of output lines printed by this program.
  */

#include <stdio.h>

int main()
{
  int n, r = 1;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {

    printf("%d %d %d PUM\n", r, r + 1, r + 2);

    r += 4;
  }
  return 0;
}