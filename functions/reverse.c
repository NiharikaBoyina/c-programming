//Function to reverse a number.
#include <stdio.h>
void reverse(int n)
{
   int reverse = 0;
   int remainder;
   while(n != 0)
   {
     remainder = n%10;
     reverse = reverse*10+remainder;
     n = n/10;

   }
   printf("The reverse number is %d\n",reverse);
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    reverse(n);
    return 0;
    
}