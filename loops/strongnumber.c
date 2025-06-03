//sum of the factorials of its digits equals the number is the strong number
//write a program to check whether the number is strong number or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int originalnumber = n;
    int strongnumber = 0;
    while(n != 0)
    {
        int remainder = n%10;
        int fact = 1;
    for(int i = 2;i <= remainder;i++)
    {
       fact = fact*i;
    }
    strongnumber += fact;
    n = n/10;
    }
    if(originalnumber == strongnumber){
        printf("The number is a strong number\n");
    }
    else{
        printf("The number is not a strong number\n");
    }
    return 0;
}