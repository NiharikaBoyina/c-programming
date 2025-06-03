//to write a program to check the minimum of the two numbers using ternary operator.
#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    (a > b) ? printf("First number is greater than second number") : printf( "First number is not greater than second number");
    return 0;

}