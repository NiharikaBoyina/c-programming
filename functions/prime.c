//Function to check whether a number is prime
#include <stdio.h>
void prime(int n)
{
int a = 0;
    for(int i = 2 ; i <= n - 1 ; i++)
    {
        if(n%i == 0)
        {
         a = 1;
        break;
        }
        
    }
    if(a == 0)
    {
        printf("The number %d is prime number\n",n);
    }
    else
    {
        printf("The number %d is a composite number\n",n);
    }
}
int main()
{
    int n;
    printf("Enter the value of the number\n");
    scanf("%d",&n);
    if( n == 1)
    {
        printf("The number is neither prime nor composite\n");

    }
    else
    {
         prime(n);
    }
    return 0;
    
}