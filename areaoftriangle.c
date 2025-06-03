//WAP to calculate area of a triangle whose base and height are user input.
#include<stdio.h>
int main()
{
float b , h ,area;
printf("Enter the base of the triangle in cm :\n ");
scanf("%f",&b);
printf("Enter the height of the triangle in cm : \n");
scanf("%f",&h);
area = (b*h)/2;
printf("The area of the required triangle is : %f\n" , area);
return 0;
}