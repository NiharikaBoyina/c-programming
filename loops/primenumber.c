//to write and program and check whether the number is prime number or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to check whether the number is prime number or not\n");
    scanf("%d",&n);
    int a = 0; // taking variable to check condition
    for(int i = 2 ; i <= n-1;i++) 
    {
        if(n%i==0) // if the condition becomes true the value of a becomes 1 thus resulting the loop to terminate completetly and print it as a composite number.
        {
          a = 1;
          break;
        } 
    }
    if(n == 1) // the number is neither prime nor composite number.
    {
        printf("The number is neither prime nor composite\n");
    }
    else if(a == 0){
        printf("The number is prime number\n");
    }
    else{
        printf("The number is composite number\n");
    }
    return 0;

    //if n = 2 then the number becomes prime as the loop does not run.
    /*  for(int i = 2 ; i <= n-1;i++) //if n = 2, then 2 <= 1 is not true thus the loop does not run, so the value of a remains zero.
    { //but 1 is not a prime number so we use another is statement saying 1 is neither prime nor composite.
        if(n%i==0) // if the condition becomes true the value of a becomes 1 thus resulting the loop to terminate completetly and print it as a composite number.
        {
          a = 1;
          break;
        } 
    }*/ 
}