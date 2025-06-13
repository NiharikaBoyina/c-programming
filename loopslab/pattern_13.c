/*WAP to print the following pattern for n rows. Ex. for n=6 rows 
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1*/
#include <stdio.h>
int main()
{
    int n; 
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
       int a = (i%2==0) ? 0 : 1;
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%d ",a);
            a = 1-a;
        }
       
       
        printf("\n");
       
    }
    return 0;

}