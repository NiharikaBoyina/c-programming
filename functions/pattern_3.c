/*    
    *
   **
  ***
 **** */
#include <stdio.h>
void pattern(int n)
{
  for(int i = 1 ; i <= n ; i++)
  {
    for(int s = 1 ; s <= n - i ; s++)
        {
            printf(" ");
        }
    for(int j = 1 ; j <= i ; j++)
    {
      printf("*");
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