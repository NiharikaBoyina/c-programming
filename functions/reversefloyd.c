//to print the reverse floyds triangle
#include <stdio.h>
void pattern(int n)
{   
    int num = n * (n + 1) / 2;  //last number to first number.
    for(int i = n ; i >= 1 ; i--)
    {
        for(int j = 1 ; j <= i ; j++)
        {
           
           printf("%d ",num);
           num--;
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