//to write a program to print the 19 table. n is inputted by the user
#include <stdio.h>
int main()
{
    int n;
    printf("The number inputted by the user to print the table 19\n");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        int m = i*19;
        printf("%d\n",m);
    }
    return 0;
}