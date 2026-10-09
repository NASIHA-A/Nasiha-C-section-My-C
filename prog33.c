#include<stdio.h>
int main()
{
float salary, bonus_percentage, bonus, final_salary;
scanf("%f", &salary);
printf("%f", salary);
scanf("%f", &bonus_percentage);
printf("%f", bonus_percentage);
bonus= salary*bonus_percentage/100;
final_salary= salary+bonus;
printf("bonus=%.2f\n", bonus);
printf("final_salary=%.2f\n", final_salary);
return 0;
}
