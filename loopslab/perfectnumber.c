/*WAP to test whether a number is Perfect Number or not.
(A number is said to be Perfect when the sum of factors excluding the number itself is equal to the original number.
Ex-6)*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int originalnumber = n;
    int sum = 0;
    for(int i = 1;i < n;i++)
    {
      if(n%i == 0)
      {
        sum += i;
      }
    }
    int perfectnumber = sum;
    if(originalnumber == perfectnumber)
    {
        printf("It is a perfect number\n");
    }
    else{
        printf("Not a perfect number\n");
    }
    return 0;

    
}