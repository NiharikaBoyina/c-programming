//to check whether the given number is divisible by 5 or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n%5==0){ 
        printf("The number is divisible by 5\n");
    }
    else
    {
        printf("The number is not divisible by 5\n");
 }
    return 0;
    }