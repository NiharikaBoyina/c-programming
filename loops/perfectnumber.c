// to write a program to check whether the program is perfect number.
//a number whose sum of proper divisors (excluding itself) equals the number.
#include <stdio.h>
int main()
{
    int n;
    int perfectnumber = 0;
    printf("Enter the number\n");
    scanf("%d",&n);
    int originalnumber = n;
    for(int i = 1;i < n;i++)
    {
        if(n%i==0)
        {
        perfectnumber += i;
        }
    }
    if(originalnumber == perfectnumber)
    {
        printf("The number is perfect number\n");
    }
    else
    {
        printf("The number is not a perfect number\n");
    }
    return 0;
}