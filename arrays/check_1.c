//Print all elements of an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}