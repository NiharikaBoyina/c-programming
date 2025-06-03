// to write a program to count the number of digits in a program.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int count = 0;
    if(n == 0){
        count = 1;
    }
    while(n != 0)
  {
    n=n/10;
    count++;
}
printf("%d",count);
    
    return 0;
}

   

    
