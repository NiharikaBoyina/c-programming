//WAP to swap the contents of two variables by using a single statement for swap.
#include<stdio.h>
int main()
{
    int num,a,b;
    printf("Enter the two numbers before swapping: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    a = a+b-(b=a);
    printf("The required numbers are %d and %d\n",a,b);
    return 0;
    

}