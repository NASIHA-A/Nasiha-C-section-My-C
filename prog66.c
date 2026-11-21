#include<stdio.h>
int main(){
int n;int even=0, odd=0;int i;
scanf("%d", &n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d", &arr[i]);
}
for(i=0; i<n; i++)
if(arr[i] %2 == 0){
      even++;
else
      Odd++;
}
printf("number of Even elements = %d\n", even);
printf("number of Odd elements = %d\n", odd);
return 0;
}

