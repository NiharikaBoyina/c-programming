//to print arthimetic progression upto n terms. n to be inputted from the user.
//1,3,5,7,9....2n-1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n for the value of the arthimetic progression\n");
    scanf("%d",&n);
    for(int i = 1;i <= (2*n-1);i = i+2)
{ 
        printf("%d\n",i);
    }
    return 0;
}