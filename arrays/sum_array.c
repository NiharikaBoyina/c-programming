//Find the sum of all elements in an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
    }
    printf("The sum is %d\n",sum);
    return 0;
}