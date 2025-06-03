// write a program to print the sum of cubes upto n terms.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int sum = 0;
    int cube;
    for(int i = 1;i <= n;i++)
    {
       cube = i*i*i;
       sum += cube;
       printf("%d^3",i);
       if(i != n)
       {
        printf(" + ");
       }
    }
    printf(" = %d\n",sum);
    return 0;
}