/*WAP to check whether a number n is prime number or not.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a = 0;
    if(n == 1)
    {
        printf("The number is neither prime nor composite\n");
    }
    for(int i = 2;i <= n-1;i++)
    { 
        if(n%i == 0)
        {
        a = 1;
        }
        break;
    }
    if(a == 0)
    {
        printf("The number is prime number\n"); 
    }
    else{
        printf("The number is composite\n");
    }
    return 0;
}