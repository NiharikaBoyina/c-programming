//Count even and odd elements in an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elemnts\n");
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int even = 0;
    int odd = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] % 2 == 0)
        {
            even = even+1;
        }
        else
        {
            odd = odd+1;
        }
    }
    printf("The count of odd numbers and even numbers respectively are %d and %d\n",odd,even);
    return 0;
}