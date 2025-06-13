/* C program to print all alphabets from a to z */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a = 0;
    for(int i = 1 ; i <= n ; i++)
    {
       a = 96+i;
       printf("%c ",a);
    }
    return 0;
}