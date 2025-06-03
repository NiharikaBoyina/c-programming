//to write a program to print the sum of first n natural numbers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1;i <= n;i++)
    {
        sum+=i;
    }
    printf("The sum is %d\n",sum);
    return 0;
}