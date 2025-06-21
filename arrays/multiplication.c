//WAP to find out the multiplication of the numbers stored in an array of integers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        scanf("%d",&a[i]);
    }
    int multiply = 1;
    for(int i = 0 ; i < n ; i++)
    {
        multiply *= a[i];
    }
    printf("The multiplication of the numbers stored in the array\n is %d\n",multiply);
    return 0;
}