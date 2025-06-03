//write a program to print and sum the following series upto n terms to print the series.
//1/1 + 2/3 + 3/5 + 4/7 + ...+ n/2n-1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    float sum = 0.0;
    for(int i = 1; i <= n;i++)
    {
       sum += (float)i/(float)(2*i-1);
       printf("%d/%d",i,2*i-1);
       if(i != n)
       {
        printf(" + ");
       }
    }
    printf(" = %.2f\n",sum);
    return 0;
}
