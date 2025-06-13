/* WAP to print the following pattern
*********
*******
*****
***
*

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 2*n-1 ; i >= 1 ; i--)
    {
        if(i % 2 != 0)
        {

        for(int j = i ; j >= 1 ; j--)
        {
            printf("* ");
        }  
    }
    printf("\n");
}
    return 0;
}