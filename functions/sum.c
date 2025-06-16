//Function to find the sum of digits of a number
#include <stdio.h>
void sum(int n)
{
    int remainder;
    int number = 0;
    while(n != 0)
    {
       remainder = n%10;
       number += remainder;
        n = n/10;
    }
    printf("The sum is %d\n",number);
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    sum(n);
    return 0;
    

}