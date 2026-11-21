//sum of all the elements in the array
#include<stdio.h>
int main()
{
int n,sum;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
    }
printf("sum= %d ",sum);
return 0;
} 
    
    
