//Display elements at odd index positions
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(i % 2!=0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
    
    
}