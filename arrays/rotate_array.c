//Rotate Array Elements to the Right by 1 Position
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
    int last = a[n-1];
    for(int i = n-1 ; i > 0 ; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = last;
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    
 

    
    return 0;

}