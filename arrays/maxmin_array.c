//Find maximum and minimum in an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elemnts\n");
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int min = a[0];
    for(int i = 0 ; i < n ; i++)
    {
      if(a[i] > max)
      {
        max = a[i];
      }
      if(a[i] < min)
      {
        min = a[i];
      }
    }
    printf("The maximum number in the elements is %d\n",max);
    printf("The minimum number in the elemnts is %d\n",min);
    return 0;
}