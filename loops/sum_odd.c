//to write a program to print the sum of first n odd numbers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1;i <= 2*n-1;i=i+2)
    {
        sum += i;
    }
    printf("The sum of first odd numbers is %d\n",sum);
    return 0;
}