/* WAP to form a pyramid of numbers for a given number. Ex. for number 4

                 1
               1 2 1
             1 2 3 2 1
           1 2 3 4 3 2 1 
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        for(int s = 1 ; s <= n-i ; s++)
        {
            printf("  ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%d ",j);
        } 
        for(int m = i-1 ; m >= 1 ; m--)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}