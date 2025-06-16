//Function to add two numbers
#include <stdio.h>
int add(int a , int b)
{
    return a+b;
}
int main()
{
int a;
int b;
   printf("Enter the value of  the first number\n");
   scanf("%d",&a);
    printf("Enter the value of  the second number\n");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("The sum of the two numbers is %d\n",sum);
    return 0;
    }