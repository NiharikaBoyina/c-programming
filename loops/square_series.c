//to write a program to print the square of previous number till n terms. n to be inputted from the user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int square = 1;
    for(int i = 1;i <= n;i++)
    {
        square = i*i;
        printf("%d\n",square);
    }
    return 0;

}