//Write a C program to perform swapping of two integers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a = %d b = %d\n",a,b);
    c = a+b;
    a = c-a;
    b = c-b;
    printf("After swapping the values are a = %d,b = %d\n",a,b);
    return 0;
}