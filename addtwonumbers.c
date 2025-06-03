//WAP to perform the addition of two integers and display the result. Input must be given by user.
#include<stdio.h>
int main()
{
    int a , b , sum;
    printf("Enter two integers: \n");
    scanf("%d%d",&a,&b);
    sum = a + b ;
        printf("Sum = %d",sum);
        return 0;
}