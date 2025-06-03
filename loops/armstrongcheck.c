//to check whether the number is armstrong number or not.
//Sum of cube of digits is equal to the number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int originalnumber = n;
    int cube = 0;
    int armstrong=0;
    while(n != 0)
    {
      int m = n%10;
      cube = m*m*m;
      n = n/10;
      armstrong += cube;
    }
    if(armstrong == originalnumber)
    {
        printf("It is an armstrong number\n");
        
    }
    else{
        printf("Not an armstong number\n");

    }
    return 0;
}