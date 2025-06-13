/*The first few numbers of the Lucas sequence which is a variation on the Fibonacci sequence are:
1  3  4  7  11  18  29  …
WAP to generate the Lucas sequence.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a = 1;
    int b = 3;
    printf("%d\n%d\n",a,b);
    int c;
    for(int i = 3 ; i <= n; i++)
    {
        c = a+b;
    }
    printf("%d\n",c);
    b = a;
    c = b;
    return 0;
}

