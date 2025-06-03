//to find the sum of n terms
//1 - 1/2 + 1/3 - 1/4...1/n terms
#include <stdio.h>
int main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
float sum = 0.0;
float difference = 0.0;
float total = 0.0;
for(int i = 1;i <= n;i++)
{
    if(i%2==0)
    {
        sum += 1.0/i;
    }
    else
    {
        difference += 1.0/i;
    }
    total = difference - sum;
}
printf("The total is equal to %f\n",total);
return 0;
}