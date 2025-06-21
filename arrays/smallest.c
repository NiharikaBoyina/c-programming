//ascending order for kth smallest
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
    int k;
    printf("Ener the value of k\n");
    scanf("%d",&k);
    for(int i = 0 ; i < n-1; i++)
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
    printf("The %dth smallest element is %d",k,a[k-1]);
    return 0;
}