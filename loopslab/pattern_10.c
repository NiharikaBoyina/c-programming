/*WAP to print the following pattern
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        if( i % 2 != 0) 
    {
        for(int j = 1 ; j <= i ; j++)
        {
          printf("%d ",j);
        }
    }
    else
    {
        for(int m = i ; m >= 1 ; m--)
        {
            printf("%d ",m);
        }
    }
        printf("\n");    
    }
    return 0;
}