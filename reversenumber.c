//WAP to reverse a three-digit number. Number must be a user input.
#include <stdio.h>
int main()
{
    int num,a,b,c;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    a = num/100;
    b = num%100; 
    c = b/10;
    int d = b%10;
    int revnum = 100*d + 10 * c + a;
    printf("The required reverse number is : %d\n",revnum);
    return 0;
}