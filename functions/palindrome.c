//Function to check if a number is a palindrome
#include <stdio.h>
void palindrome(int n)
{
    int number = n;
    int remainder;
    int palindrome = 0;
    while(n != 0)
    {
      remainder = n%10;
      palindrome = palindrome*10+remainder;
      n = n/10;
    }
    if(number == palindrome)
    {
        printf("The number %d is palindrome number\n",number);
    }
    else
    {
        printf("The number %d is not a palindrome number\n",number);
    }
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    palindrome(n);
    return 0;

}