//a number is a neon number if the sum of digits of the square of the number is equal to the number itself
// write a program to check if the give number is neon number or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int square = n*n;
    int originalnumber = n*n;
    int sum = 0;
    int remainder;
    while(square != 0)
    {
       remainder = square%10;
       sum += remainder;
       square = square/10;
    }
    if(n == sum)
    {
        printf("The number is a neon number\n");
    }
    else
    {
        printf("The number is not a neon number\n");
    }
    return 0;
}