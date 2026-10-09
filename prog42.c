#include<stdio.h>
int main()
{
int x, sp, cp, profit;
scanf("%d", &x);
printf("%d", x);
scanf("%d", &sp);
printf("%d", sp);
scanf("%d", &cp);
printf("%d", cp);
sp = x*sp;
cp = x*cp;
profit = (sp - cp - 100);
printf("profit = %d", profit);
return 0;
}
