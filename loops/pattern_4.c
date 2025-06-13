/* write a program to print this pattern - ****
                                           ***
                                           ** 
                                           * */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1 ; i <=  n;i++)
    {
        for(int j = n ; j >= i ; j--)
        {
            printf("* ");
        }
    
    printf("\n");
    }
    return 0;
}                                         