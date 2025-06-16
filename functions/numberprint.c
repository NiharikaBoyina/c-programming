//Function to print a given number N times
#include <stdio.h>
void number(int n)
{
    for(int i = 1 ; i <= n ;i++)
    {
        printf("%d \n",n);
    }
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    number(n);
    return 0;

}