//to check whether the number is divisible by 5 or 3.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to check the divisibility\n");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    {
        printf("The number is divisible by 5 or 3\n");
    }
    else 
    {
        printf("The number is neither divisble by 5 nor divisible by 3\n");
    }
    return 0;
}