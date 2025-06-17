//print the pascal's triangle - combinations
#include <stdio.h>
int factorial_value(int n)
{
    int fact = 1;
    int factorial;
    for(int i = 1 ; i <= n ; i++)
    {
        fact *= i;
    }
    factorial = fact;
    return factorial;
}
int combination(int n , int r)
{
     return (factorial_value(n))/(factorial_value(r)*factorial_value(n-r));
}
void pattern(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int s = 1 ; s <= n-i ; s++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
           printf("%d ",combination(i-1,j-1));
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    pattern(n);
    return 0;

}