//Function to find the maximum of two numbers
#include <stdio.h>
int greatest(int a , int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
      return b;
    }
}
int main()
{
    int a;
    int b;
    printf("Enter the two number to check which is maximum\n");
    scanf("%d%d",&a,&b);
    if( a== b)
    {
        printf("The numbers are equal\n");
    }
    else 
    {
    int maximum = greatest(a,b);
    printf("The maximum number is %d\n",maximum);
    }
    return 0;
}