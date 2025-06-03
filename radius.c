//WAP to calculate area of a circle while taking radius as user input.
#include<stdio.h>
int main()
{
float radius,area;
printf("Enter the radius of the circle to find the area of the circle: ");
scanf("%f",&radius);
area = 3.14*radius*radius*2;
printf("The required area of the circle is : %f",area);
return 0;
}