#include<stdio.h>
int main()
{
int a,count,sum = 0;
scanf("%d", &a);
for(;a>0; a=a/10)
{
sum = sum + (a%10);
count++;
}
printf("%d%d", sum,count);
return 0;
} 
