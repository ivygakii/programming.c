//bank loan
#include<stdio.h>
int main()
{
int age ,salary;
printf("Enter age in years and salary: ");
scanf("%d%d" ,&age ,&salary);
if(age>=21 ,salary>=21000){
printf("congratulations you qualify for a loan");}
else{
printf("unfortunately we are unable to offer you a loan at this time");
}
return 0;
}