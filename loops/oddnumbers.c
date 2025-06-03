//to print the odd numbers till n. n is to be inputted from the user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i = 1; i <= n;i++)
    {
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
