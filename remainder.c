//Take two integers input,a and b such that a is greater than b, and the find the remainder when a is divided by b
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers input a and b");
    scanf("%d%d",&a,&b);
    printf("The remainder is %d",a%b);
    return 0;
}