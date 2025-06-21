//Sort and Find the Kth Largest Element
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    int a[n];
    int k;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Enter the value of k\n");
        scanf("%d",&k);
    
    int temp;
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n-i-1 ; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    if(k >= 1 && k <= n)
    {
    printf("The %dth largest element is %d",k,a[k-1]);
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
    
}