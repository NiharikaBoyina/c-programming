/*  *  
   * *  
  *   *  
   * *  
    *     */
#include <stdio.h>
void pattern(int n)
{
  for(int i = 1 ; i <= n ; i++)
  {
    for(int s = 1 ; s <= n-i ; s++)
    {
      printf(" ");
    }

    for(int j = 1 ; j <= 2*i-1 ; j++)
    {
      if(j == 1 || j == 2*i-1)
      {
      printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    
    printf("\n");
  }
  for(int m = n ; m >= 1 ; m--)
    {
      for(int l = 1 ; l <= n-m ; l++)
      {
        printf(" ");
      }
      for(int z = 1 ; z <= 2*m-1 ; z++)
      {
        if(z==1 || z==2*m-1)
        {
        printf("*");
        }
        else
        {
          printf(" ");
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