/* WAP to test whether an inputted number is a strong number or not.
(A number is said to be Strong if sum of factorial of digits is equal to the original number)*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int originalnumber = n;
    int sum = 0;
    int fact;
    int number;
    while(n != 0)
    {   
        fact = 1;
        number = n%10;
        for(int i =1;i <= number;i++)
        {
            fact *= i;
        }
        sum += fact;
        n = n/10;
    }
    if(originalnumber == sum)
    {
        printf("The number is strong number\n");
    }
    else
    {
        printf("The number is not a strong number\n");
    }
    return 0;
}