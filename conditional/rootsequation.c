//to find out the roots of a quadratic equation
#include <stdio.h>
int main()
{
    int a ,b ,c;
    printf("Enter the values of a , b , c\n");
    scanf("%d%d%d",&a,&b,&c);
    double d = b*b - 4*a*c;
    if(d == 0)
    {
        printf("The roots are equal\n");
    }
    else if(d < 0)
    {
        printf("The are imaginary and complex\n");
    }
    else
    {
        printf("The roots are real and unequal\n");
    }
    return 0;
}

