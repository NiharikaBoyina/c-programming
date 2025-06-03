//print the sum of series till the n terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    float sum = 0.0;
    for(int i = 1;i <= n;i++)
    {
      sum += 1.0/i;
    }
    printf("The sum is %f",sum);
    return 0;
}