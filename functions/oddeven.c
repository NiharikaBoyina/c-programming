//Function to check if a number is even or odd
#include <stdio.h>
void check(int a)
{
    if(a%2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
}
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    check(a);
    return 0;

}