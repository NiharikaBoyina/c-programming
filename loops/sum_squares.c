//to write a program to printf the sum of squares of the first n natural numbers. n to be inputted from the user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int square;
    int sum = 0;
    for(int i = 1;i <= n;i++)
    {
     square = i*i;
     sum += square;
    }
    printf("The sum is %d\n",sum);
    return 0;
}