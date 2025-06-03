// to check whether the program is palindrome or not.
#include <stdio.h> 
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int original = n;
    int reversenumber = 0;
    while(n != 0)
    {
        int m = n%10;
        reversenumber = reversenumber*10+m;
        n = n/10;
    }
    if(reversenumber == original)
    {
        printf("The number is palindrome\n");
    }
    else
    {
      printf("The number is not a palindrome number\n");
    }
    return 0;
}