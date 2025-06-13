/*WAP to print all odd and even numbers separately within a given range. The range is input
through user.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        if( i % 2 == 0 )
        {
            printf("even is %d \n",i);
        }
        else
        {
            printf("odd is %d \n",i);
        }
    }
    return 0;
}