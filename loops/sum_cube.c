//to write a program to print the sum of cubes of first n natural numbers. n to be inputted from the user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int cube;
    int sum = 0;
    for(int i = 1;i <= n;i++)
    {
     cube = i*i*i;
     sum += cube;
    }
    printf("The sum is %d\n",sum);
    return 0;
}