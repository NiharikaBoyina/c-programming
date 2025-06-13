/* to print the following series - 1234...n upto n lines*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times the line needs to be printed\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        for(int i = 1 ; i <= n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}