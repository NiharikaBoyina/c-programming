/*WAP to print the following pattern
1 3 7 15 31…….

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int term = 1;
   for(int i = 3 ; i <= n ; i++)
    {
       printf("%d\n",term);
       term = term*2+1;
    }
   return 0;
  
    
}