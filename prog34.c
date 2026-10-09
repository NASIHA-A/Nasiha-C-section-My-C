#include<stdio.h>
int main()
{
float bill, discountpercentage, discount, totalbill;
scanf("%f", &bill);
printf("%f", bill);
scanf("%f", &discountpercentage);
printf("%f", discountpercentage);
discount=bill*discountpercentage/100;
totalbill=bill-discount;
printf("discount=%.2f\n", discount);
printf("totalbill=%.2f\n", totalbill);
return 0;
}
