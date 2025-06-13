/* WAP to print the following pattern
*
***
*****
*******
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    { 
        for(int j = 1 ; j <= 2*i-1 ; j = j+1)
        {
            
          printf("  *");
        }
    
     printf(" \n ");
     
    }
       
    
    return 0;
}