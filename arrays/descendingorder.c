//Bubble Sort in C for Descending Order
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
    int temp;
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n-i-1 ; j++)
        {
            if(a[j+1]  > a[j])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The sorted array is : ");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}