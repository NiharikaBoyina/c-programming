//to write a program on geometricprogression. Print this series 3,12,48,...n terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n to print the series till n terms\n");
    scanf("%d",&n);
    int a = 3;
    for(int i = 1; i <= n;i++)
    {
        printf("%d\n",a);
        a = a*4;
    }
    return 0;
}
