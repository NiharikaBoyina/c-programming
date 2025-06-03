//to input three sides of a triangle from the user and check if the sides are valid or not to form the triangle.c
#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter three sides for the triangle to check the validity\n");
    printf("Enter the first side\n");
    scanf("%d",&a);
    printf("Enter the second side of the triangle\n");
    scanf("%d",&b);
    printf("Enter the third side of the traingle\n");
    scanf("%d",&c);
    if(b+c > a && a+c > b && a+b > c)
    {
        printf("Valid triangle\n");
    }
    else{
        printf("Invalid triangle\n");
    }
    return 0;
    
}