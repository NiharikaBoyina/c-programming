//to write the program arthimetic progression 2 without using any mathematic formula
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to be printed till n terms\n");
    scanf("%d",&n);
    int m = 4;
    for(int i = 1;i <= n; i++)
    {
        printf("%d\n",m);
        m = m+3;
    }
    return 0;
}