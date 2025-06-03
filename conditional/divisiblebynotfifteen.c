// write a program to check if the number is divisible by 5 or 3 but not fifteen.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if((n%3==0 || n%5==0) && n%15 != 0)
    {
        printf("Tne humber is divisible by 3  or 5 but not divisible by 15\n");
    }
    else{
        printf("Invalid condition\n");
    }
    return 0;
}