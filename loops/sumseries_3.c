//write a program in c to print the sum of this series upto n terms.
//1^2+2^2+3^2...n^2
#include <stdio.h>
int main()
{
    int n;
    printf("Enter ther value of n\n");
    scanf("%d",&n);
    int sum = 0;
    int square;
    for(int i = 1;i <= n;i++)
    {
        square = i*i;
        sum += square;
        printf("%d^2",i);
        if(i != n)
        {
            printf(" + ");
        }
    }
    printf(" = %d\n",sum);
    return 0;
}