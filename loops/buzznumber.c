/* A number is a buzz number if it is either divisible by 7 or the number ends with 7.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int remainder;
    int originalnumber = n;
    while(n != 0)
    {
        remainder = n%10;
        break;
    }
    if(originalnumber%7 == 0 || remainder == 7)
    {
        printf("The number is a buzz number\n");
    }
    else{
        printf("The number is not a buzz number\n");
    }
    return 0;
}