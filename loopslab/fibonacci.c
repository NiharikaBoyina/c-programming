/*WAP to print Fibonacci series up to n terms.*/
// 0 1 1 2 3 5 ..... n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c;
    printf("%d\n%d\n",a,b);
    for(int i = 3; i<=n ;i++)
    {
       c = a+b;
       printf("%d\n",c);
    }
    b = a;
    c = b;
    return 0;
    
    

}