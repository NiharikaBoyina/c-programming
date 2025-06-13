/*Write a C program to print a hollow square pattern using a while loop. For row=4
* * * * *
*       *
*       *
* * * * *

*/
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  for(int i = 1 ; i <= n ; i++)
  {
      for(int j = 1 ; j <= n ; j++)
      {
        if(i == 1 || i == n ||j == 1 || j == n)
        {
          printf("* ");
        }
        else{
          printf("  ");
        }
      }
      
    printf("\n");
    }
 
return 0;
}

