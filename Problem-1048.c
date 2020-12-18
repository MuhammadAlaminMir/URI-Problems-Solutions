/* The company ABC decided to give a salary increase to its employees, according to the following table:

        Salary	            Readjustment Rate
        0 - 400.00               15%
        400.01 - 800.00          12%
        800.01 - 1200.00         10%
        1200.01 - 2000.00        7%
        Above 2000.00            4%

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and 
the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example. */
#include <stdio.h>
int main()
{
    float salary, new_salary, increase;
    short increase_parcent;
    scanf("%f", &salary);
    if (salary >= 2000.01)
    {
        increase = (salary * 4) / 100;
        increase_parcent = 4;
        new_salary = salary + increase;
    }
    else if (salary >= 1200.01)
    {
        increase = (salary * 7) / 100;
        increase_parcent = 7;
        new_salary = salary + increase;
    }
    else if (salary >= 800.01)
    {
        increase = (salary * 10) / 100;
        increase_parcent = 10;
        new_salary = salary + increase;
    }
    else if (salary >= 400.01)
    {
        increase = (salary * 12) / 100;
        increase_parcent = 12;
        new_salary = salary + increase;
    }
    else
    {
        increase = (salary * 15) / 100;
        increase_parcent = 15;
        new_salary = salary + increase;
    }
    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", increase);
    printf("Em percentual: %hi %%\n", increase_parcent);

    return 0;
}