//WAP to test whether a number is Armstrong Number or not.
/*(A number is said to be Armstrong when the sum of cubes of its digit is equal with the original number.
Ex-153)*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of the number\n");
    scanf("%d",&n);
    int i;
    int originalnumber = n;
    int number = 0;
    int cube;
    while(n != 0)
    {
      i = n%10;
      cube = i*i*i;
      number += cube;
      n = n/10;

    }
    if(originalnumber == number)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an armstrong number\n");
    }
    return 0;
    
}

