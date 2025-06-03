//to input a number from the user and show its absolute value.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integer number: \n");
    scanf("%d",&n);
    if(n<0)
    {
        n = -n;
        printf("The absolute value is %d\n",n);
    }
    else{
        printf("The absolute value is %d\n",n);

    }
    return 0;
    }

