//Function to calculate the factorial of a number
#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i = 1 ; i <= n ; i++)
    {
      fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if( n == 1 || n == 0)
    {
        printf("The factorial is 1\n");
    }
    else
    {
    int value = factorial(n);
    printf("The value or the factorial of the number is %d \n",value);
    }
    return 0;
}