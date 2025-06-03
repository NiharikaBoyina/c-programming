//to print the table of n which is to be inputted from the user.
#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the number whose table is to be printed\n");
    printf("Enter the number until which the table is to be printed\n");
    scanf("%d%d",&n,&m);
    for(int i = 1;i <= m;i++)
    {
        int table = i*n;
        printf("%d\n",table);
    }
    return 0;
}