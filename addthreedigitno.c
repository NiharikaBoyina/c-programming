//WAP to find the sum of all digits of a three-digit number. Number must be a user input.
#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("Enter the three digit number: \n");
    scanf("%d",&num);
    a = num / 100;
    int x = num % 100;
    b = x / 10;
    c = x % 10;
    int add = a + b + c;
    printf("The sum of all the digits in the number is %d\n",add);
    return 0;
}