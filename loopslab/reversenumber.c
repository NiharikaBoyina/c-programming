// WAP to find out reverse of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int i;
    int sum;
    int reverse = 0;
    while(n != 0)
    {
    i = n%10;
    reverse = (reverse*10+i);
    n = n/10;
    }
    printf("%d\n",reverse);
    return 0;
}