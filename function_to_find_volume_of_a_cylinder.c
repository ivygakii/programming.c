// function to calculate volume of a cylinder
#include <stdio.h>
float cylinder_volume(float radius,float height){
     const float pi=3.14159
     pi*radius*radius*height;
}
 int main(){
     float radius,height,volume;
     printf("enter the radius of cylinder:");
     scanf("%f",&radius);
     printf("Enter height of the cylinder:");
     scanf("%f",&height);
     volume=cylinder_volume(radius,height);
     printf("The volume of a cylinderis %.2f cubic units\n",volume);
     return 0;
 }