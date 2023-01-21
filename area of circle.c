/*Program to find area of a circle*/
#include <stdio.h>
int main()
{  
float radius, area;
printf("\n Enter radius of circle :");
scanf("%f", &radius);
area=3.142*radius*radius;
printf("\n Area of circle:%f", area);
return 0;
}