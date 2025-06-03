// to check the program is positive , negative or zero using ternary operator.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    (n > 0) ? printf("The number is positive\n") : ((n == 0) ? printf("The number is zero\n") : printf("The number is negative\n"));
    return 0;
}