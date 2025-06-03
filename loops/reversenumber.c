//to write a program to reverse a number inputted from the user
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);;
    int reversenumber = 0;
    int digit;
    while(n != 0)
    {
    int m = n%10;
   reversenumber = reversenumber*10 + m;
   n = n/10;
}
    printf("%d",reversenumber);
    return 0;
}