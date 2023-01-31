// Program to calculate compound interest
#include <stdio.h>
int main ()
{
float t,n,r,p,interest;
printf("\nEnter the principal_amount: ");
scanf("%f" ,&p);
printf("\nEnter time value: ");
scanf("%f" ,&t);
printf("\nEnter rate value: ");
scanf("%f" ,&r);
interest=p*pow((1+r),t);
//pow(2,8)
printf("interest=%7.2" ,interest);
return 0;
}