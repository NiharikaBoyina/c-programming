/* write a program to print this following pattern - 1
                                                     1 3 
                                                     1 3 5 
                                                     1 3 5 7*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= (2*i) - 1 ; j = j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}                                        