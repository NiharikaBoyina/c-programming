/*WAP to input any two integers, and provide a menu to the user to select any of the options as 
add, subtract, multiply, divide and display the result accordingly*/
#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter two integers\n");
    scanf("%d%d",&a,&b);
    printf("Select the operation from the menu\n");
    printf("A for Add, S for Subtract, M for Multiplication, D for Division: \n");
    char arthimetic;
    scanf(" %c",&arthimetic);
    switch(arthimetic)
    {
        case 'A':
        int add = a+b;
        printf("The sum is %d\n",add);
        break;
        case 'S':
        int subtract = a-b;
        printf("The difference is %d\n",subtract);
        break;
        case 'M':
        int multiply = a*b;
        printf("The multiplication is %d\n",multiply);
        break;
        case 'D':
        int divide = a/b;
        printf("The quotient is %d\n",divide);
        break;
        default :
        printf("Arthimetic operation not identified\n");
        

    }
    return 0;

}