//program to check whether a number is even or odd
#include<stdio.h>
int main(){
int a;
printf("\nEnter a value :");
scanf("%d" ,&a);
//true if a is perfectly divisible by 2
if(a%2==0)
printf("%d is even:" ,a);
else
printf("%d is odd:" ,a);
return 0;
}