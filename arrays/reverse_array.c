// write a program to reverse the array elements
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
    for(int i = n-1 ; i >= 0; i--)
    {
      printf("%d ",a[i]);
    }
    return 0;
}