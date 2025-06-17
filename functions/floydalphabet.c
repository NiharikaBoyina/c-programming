//floyd alphabet pattern.
#include <stdio.h>
void pattern(int n)
{
    int a = 64;
   for(int i = 1 ; i <= n ; i++)
   {
    for(int j = 1 ; j <= i ; j++)
   { 
    a = a+1;
    printf("%c ",a);
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