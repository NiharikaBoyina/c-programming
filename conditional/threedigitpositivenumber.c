//to take input from the user and check if it is a three digit positive number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>99 && n<1000)
    {
        printf("The number is a three digit number\n");
    }
    else\
    {
        printf("Not a three digit number\n");
    }
    return 0;

}



