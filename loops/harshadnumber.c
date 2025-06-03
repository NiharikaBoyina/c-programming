//a number is called harshad number if its divisble by the sum of its digits
//to write a program to check whether the given number is harshad number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum = 0;
    int originalnumber = n;
    int remainder;
    while(n != 0)
    {
        remainder = n%10;
        sum = sum+remainder;
        n = n/10;
    }
    if(originalnumber%sum == 0)
    {
        printf("It is a harshad number\n");
    }
    else{
        printf("The number is not a harshad number\n");
    }
    return 0;
}