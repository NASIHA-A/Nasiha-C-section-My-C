#include<stdio.h>
int main()
{
int a,rem,rev=0,original;
scanf("%d", &a);
original = a;
while(a>0)
{
rem = a % 10;
rev = rev*10 + rem;
a = a/10;
}
printf("%d\n", rev);
if(original == rev)
{
printf("Palindrome");
}
else
{
printf("Not a Palindrome");
}
return 0;
}
