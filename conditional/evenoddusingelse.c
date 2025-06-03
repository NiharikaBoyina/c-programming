//to write a program using if else statements
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;
}