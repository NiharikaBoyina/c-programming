//print the first n terms of the fibonacci series 
//0 1 1 2 3 5 8 13..upto n terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n to display the nth term in the fibonacci series\n");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c;
    printf("%d\n%d\n",a,b);
   for(int i = 2;i <= n;i++)
   {
       c = a+b;
       printf("%d\n",c);
       a = b;
       b = c;
   }
   return 0;
}
   
