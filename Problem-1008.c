/* Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. 
Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.

Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
Don’t forget the space before and after the equal signal and after the U$. */
#include <stdio.h>

int main()
{

    short employees, work_hours;
    float hourly_income, monthly_income;
    scanf("%hi %hi %f", &employees, &work_hours, &hourly_income);
    monthly_income = work_hours * hourly_income;
    printf("NUMBER = %hi\n", employees);
    printf("SALARY = U$ %.2f\n", monthly_income);

    return 0;
}