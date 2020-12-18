/* Read an integer value corresponding to a person's age (in days) and print it in years, months and days, 
followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month.
 In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364.
 This is just an exercise for the purpose of testing simple mathematical reasoning. */
#include <stdio.h>

int main()
{
    short total_days, years, month, days;
    scanf("%hi", &total_days);
    years = total_days / 365;
    month = (total_days % 365) / 30;
    days = (total_days % 365) % 30;
    printf("%hi ano(s)\n%hi mes(es)\n%hi dia(s)\n", years, month, days);
    return 0;
}