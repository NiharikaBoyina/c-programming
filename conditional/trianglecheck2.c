/*WAP to check whether the triangle is equilateral, isosceles or scalene (Triangle consists of three sides of provided lengths n1, n2 and n3 units).
*/
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter the sides of the triangle\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if((n1 == n2) && (n2 == n3))
    {
        printf("The triangle is equilateral\n");
    }
    else if(n1 == n2 || n2 == n3 || n3 == n1)
    {
        printf("The triangle is isosceles triangle\n");
    }
    else{
        printf("The triangle is scalene triangle\n");
    }
    return 0;
}