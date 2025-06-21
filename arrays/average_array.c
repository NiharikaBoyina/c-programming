//Find the average of array elements
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
    int sum = 0;
    float average;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
    }
    average = (float)sum/n;
    printf("The average of the elements is %.2f\n",average);
    return 0;
}