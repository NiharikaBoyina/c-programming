//to write a program check whether the number is a duck number or not.
//A Duck Number is a number that contains zero, but not at the beginning.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int remainder;
    int has_zero  = 0;
    while(n > 0)
    {
        remainder = n%10;
        if(remainder == 0)
        {
           has_zero = 1;
        }
        n = n/10;
    }
    if(has_zero == 1 )
    {
        printf("The number is a duck number\n");
    }
    else{
        printf("The number is not a duck number\n");
    }
    return 0;



}