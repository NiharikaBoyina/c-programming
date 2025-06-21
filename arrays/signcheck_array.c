//Count the Total Number of Positive, Negative, and Zero Elements in an Array
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
    int negative = 0;
    int positive = 0;
    int zero = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > 0)
        {
            positive = positive + 1;
        }
        else if(a[i] < 0)
        {
            negative = negative+1;
        }
        else
        {
            zero = zero+1;
        }
    }
    printf("The number of positive , negative and zero respectively are %d,%d and %d",positive,negative,zero);
    return 0;
}