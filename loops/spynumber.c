//a number is a spy number if the sum of its digits is equal to the product of its digits.
// write a program to check whether the entered number is a spy number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int remainder;
    int sum = 0;
    int product = 1;
    if(n == 0)
    {
        remainder = 0;
    }
    while( n != 0 ) 
    {
       remainder = n%10;
       sum += remainder;
       product *= remainder;
       n = n/10;

    }
    if(sum == product)
    {
        printf("The number is a spy number\n");
    }
    else{
        printf("The nuber is not a spy number\n");
    }
    return 0;

}