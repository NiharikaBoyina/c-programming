// to check the divisibilty of the number by 5 using ternary operator 
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    (number % 5 == 0) ? printf("The number is divisible by 5\n") : printf("The number is not divisible by 5\n");
    return 0;
}