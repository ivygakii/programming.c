//function to return area of a circle
#include<stdio.h>
#define pi 3.142
int area(int r);
int main()
{
int a,b,area;
printf("enter value of a,b ");
scanf("%d%d" ,&a,&b);
area=pi*a*b;
printf("the area is %d" ,area);
return 0;
}
//function definition 
int area(int a)
{
int area;
area=pi*a;
return area;
}