// to check the largest of three numbers using ternary operator.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int largest = (a > b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    printf("The largest number is %d",largest);
    return 0;
}
