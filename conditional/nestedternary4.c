//to find the middle number using nested ternary operator
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers a,b,c in orderwise manner\n");
    scanf("%d%d%d",&a,&b,&c);
    (a > b && a < c) ? printf("first number is middle number\n") : ((c>a && c<b) ? printf("third number is the middle number\n") : printf("second number is the middle number\n"));
    return 0;

}