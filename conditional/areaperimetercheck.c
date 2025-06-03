//write a program to check whether the area of a rectangle is greater or perimeter is greater.
#include <stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&length);
    printf("Enter the breadth of a rectangle\n");
    scanf("%d",&breadth);
    area = length*breadth;
    perimeter = 2 * (length+breadth);
    if(area > perimeter)
    {
        printf("Area of the rectangle is greater than perimeter\n");
    }
    else
    {
        printf("Perimeter is greater than the area of the rectangle\n");
    }
    return 0;

}