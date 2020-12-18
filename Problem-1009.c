/* Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money).
 Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month ,
  with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces. */
#include <stdio.h>

int main()
{
    char seller_Name[30];
    scanf("%s", &seller_Name);
    double fixed_salary, total_sale, final_salary;
    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sale);
    final_salary = ((total_sale * 15) / 100) + fixed_salary;
    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}