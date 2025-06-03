// to write a program to print the series and the sum.
//1/2 + 2/4 + 3/6 + .... + n/2n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    float sum = 0.0;
    for(int i = 1;i <= n;i++)
    { 
        sum += (float)i/(float)(2*i);
        printf("%d/%d",i,2*i);
        if(i != n)
        {
            printf(" + ");
        }
    }
    printf(" = %.2f",sum);
    return 0;

}