//WAP to delete an element at desired position from an array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    printf("Enter the position of the array that has to be deleted\n");
    scanf("%d",&m);
    for(int i = 0 ; i < n ; i++)
    {
       if(m == i)
       {
         continue;
       }
       printf("%d ",a[i]);
    }
    return 0;
}