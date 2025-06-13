//WAP to find out sum of digits of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int i;
    int sum = 0;
    while(n != 0)
    {
         i = n%10; 
         sum += i;
         n = n/10;
    }
    if(n == 0)
    {
        sum += 0;
    }
printf("%d\n",sum);
return 0;
}