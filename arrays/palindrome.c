//To check whether the array is palindrome or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int Palindrome = 1;
    for(int i = 0 ; i < n/2 ; i++)
    {
        if(a[i] != a[n-1-i])
        {
            Palindrome = 0;
            break;
        }
    }
    if(Palindrome == 1)
    {
        printf("The array is a Palindrome\n");
    }
    else
    {
        printf("The array is not a palindrome\n");
    }
    return 0;

}