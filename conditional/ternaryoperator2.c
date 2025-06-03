//to check whether the number is positive or negative using ternary operator
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    (number >= 0) ? printf("The number is positive") : printf("The number is negative");
    return 0; 
}