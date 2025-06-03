// to write to program to print the following series and its sum upto n terms
//1/1! + 1/2!+ ...1/n!
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int fact = 1;
    float sum = 0.0;
    for(int i = 1;i <= n;i++)
    {
        fact *= i;
        sum += 1.0/fact;
        printf("1/%d!",i);
        if(i != n){
            printf(" + ");
        }
    }
    printf(" = %f\n",sum);
    return 0;
}