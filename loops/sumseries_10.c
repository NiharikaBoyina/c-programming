// write a program in c to print the series and usm upto n terms
//1/1.2 + 2/2.3 + ... + n/n.(n+1)
#include <stdio.h>
int main()
{
 int n;
 printf("Enter the value of n\n");
 scanf("%d",&n);
 float sum = 0.0;
 for(int i = 1;i <= n;i++)
 {
    sum += (float)i/(float)(i * (i+1));
    printf("%d/%d",i,i*(i+1));
    if(i != n)
    {
        printf(" + ");
    }
 }
 printf(" = %.2f\n",sum);
 return 0;
}