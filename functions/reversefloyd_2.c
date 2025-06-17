//to print the reverse floyd triangle
#include <stdio.h>
void pattern(int n)
{
   int num = 91;
   for(int i = n ; i >= 1; i--)
   {
    {
    for(int j = 1 ; j <= i ; j++)
        {
     num = num-1;
     printf("%c ",num);
       }
   
   }
   printf("\n");
}
}
int main()
{
   int n;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   pattern(n);
   return 0;
}