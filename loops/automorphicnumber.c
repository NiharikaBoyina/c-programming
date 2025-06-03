//a number is called an automorphic number if its square ends with the number itself
//write e program to check whether the number is an automorphic number or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
     scanf("%d",&n);
     int square = n*n;
     int originalnumber = n;
     int remainder;
     int digits = 0;
    while(n != 0)
    { 
        remainder = n%10;
        digits++;
        n = n/10;
    }
    int mod = 1;
    for(int i = 0;i < digits;i++)
    {
        mod *= 10;
    }
    if(square%mod == originalnumber)
    {
        printf("The number is an automorphic number\n");
    }
    else{
        printf("The number is not an automorphic number\n");
    }
    return 0;
}

     