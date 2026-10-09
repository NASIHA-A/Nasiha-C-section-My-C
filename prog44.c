#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d", &a,&b);
switch(a,b){
case 1: 
printf("addition=%d", a+b);
break;
case 2: 
printf("multiplication=%d", a*b);
break;
case 3: 
printf("subtraction=%d", a-b);
break;
}
return 0;
}


