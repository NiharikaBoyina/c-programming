/* to write a program to print the following series -  A B C D
                                                       A B C D
                                                       A B C D*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
  
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            printf("%c ",('A'+j-1));
        }
        printf("\n");

    }
    return 0;

}