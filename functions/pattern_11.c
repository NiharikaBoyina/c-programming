/*   
12345
1234
123
12
1   */
#include <stdio.h>
void pattern(int n)
{
   for(int i = n ; i >= 1 ; i--)
   {
    for(int j = 1 ; j <= i ; j++)
    {
        printf("%d",j);
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