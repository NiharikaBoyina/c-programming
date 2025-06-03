//to write a program to print the sum of first n even natural numbers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 2;i <= 2*n;i = i+2)
    {
        sum  += i;
    }
    printf("The sum of even numbers is %d\n",sum);
    return 0;
}