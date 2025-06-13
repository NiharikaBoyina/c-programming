/*WAP to test whether a number is Palindrome Number or not.
(A number is said to be Palindrome when its reverse is equal with the original number.
Ex-121)*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int i;
    int originalnumber = n;
    int palindrome = 0;
    while(n != 0)
    {
      i = n%10;
      palindrome = palindrome * 10 + i;
      n = n/10;
    }

    if(palindrome == originalnumber)
    {
    printf("It is palindrome number\n");
    }
    else
    {
        printf("Not a palindrome number\n");
    }
    return 0;
}