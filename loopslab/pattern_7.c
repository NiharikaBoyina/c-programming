/* WAP to print the following pattern
A
B A
C B A
D C B A
E D C B A
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = i ; j >= 1 ; j--)
        { 
           a = j + 64;
           printf("%c ",a);

        }
        printf("\n");
    }
    return 0;
}
