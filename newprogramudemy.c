//to print the area and perimeter of rectangle.
#include <stdio.h>
int main()
{
    double length,area,width,perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%lf",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf",&width);
    area = length * width;
    perimeter = 2 * ( length + width);
    printf("The area and perimeter is %f and %f ",area,perimeter); 
    return 0;

}