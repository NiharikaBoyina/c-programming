//write a program to check whether the number is even or odd using ternary operator
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    (number%2==0) ? printf("The number is even") : printf("The number is odd");
    return 0;
}