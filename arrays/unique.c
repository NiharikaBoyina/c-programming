//WAP to Print all unique elements of an array.
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
    for(int i = 0 ; i < n ; i++)
    {
        int count = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(a[i] == a[j])
            {
            count++;
            }

        }
        if(count == 1)
        {
        printf("%d ",a[i]);
        }
    }
    return 0;
}