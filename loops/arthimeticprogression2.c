//to print arthimetic progression till n terms . The nth term to be inputted from the user.
//4,7,10,...,n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= (3*n+1);i = i+3){     //nth term = a+(n-1)d
        printf("%d\n",i);
    }
    return 0;
}