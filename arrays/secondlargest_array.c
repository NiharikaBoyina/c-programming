//Find the Second Largest Element in the Array
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
    int max = a[0];
    int second = -1;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(second < a[i] && a[i] != max)
        {
           second = a[i];
        }
    }
    if( second == -1)
    {
        printf("There are no second largest elements\n");
    }
    else
    {
        printf("The second largest element is %d",second);
    }
    return 0;
}