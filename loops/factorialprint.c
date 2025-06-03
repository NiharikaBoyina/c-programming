//to print the factorial of a number.
#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter the n \n");
    scanf("%d",&n);
    if(n == 0 || n == 1)
    {
        printf("The factorial is 1\n");
    }
    for(int i = 2;i <= n;i++)
    {
        fact = fact * i;
    }
    printf("The factorial is %d\n",fact);
    return 0;
    
}