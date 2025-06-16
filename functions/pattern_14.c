/*  
*       *
**     **
***   ***
**** ****
*********
**** ****
***   ***
**     **
*       *     */
#include <stdio.h>
void pattern(int n)
{
    int i,j;
   for(i = 1; i <= n; i++)
    {
        // Left stars
        for(j = 1; j <= i; j++)
            printf("*");
        // Spaces
        for(j = 1; j <= 2*(n-i); j++)
            printf(" ");
        // Right stars
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    // Lower part
    for(i = n-1; i >= 1; i--)
    {
        // Left stars
        for(j = 1; j <= i; j++)
            printf("*");
        // Spaces
        for(j = 1; j <= 2*(n-i); j++)
            printf(" ");
        // Right stars
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}


int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}