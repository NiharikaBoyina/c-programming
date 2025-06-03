/* Choose an Option:
1. Check if number is Prime
2. Find factorial
3. Check if Palindrome
4. Exit */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number from 1 to 4\n");
    scanf(" %d",&num);
    switch(num)
    {
        case 1:
        int isPrime = 0;
        int prime;
        printf("Enter the number\n");
        scanf("%d",&prime);
        if(prime == 1){
            printf("The number is neither prime nor composite");
        }
        for(int i = 2;i < prime;i++)
        {
            if(prime%i == 0)
            {
               isPrime = 1;
               break;
            }
        }
        if(isPrime == 0)
        {
            printf("The number is prime number\n");
        }
        else{
            printf("The number is not a prime number\n");
        }
        break;

        case 2:
        int fact = 1;
        int number;
        printf("Enter the number\n");
        scanf("%d",&number);
        for(int i = 2; i <= number;i++) 
        {
        fact = fact*i;
        }
        printf("%d\n",fact);
        break;

        case 3:
        int palindrome;
        int palindromenumber = 0;
        int a;
        printf("Enter a number\n");
        scanf("%d",&palindrome);
        int originalnumber = palindrome;
        while(palindrome != 0)
        {
            a = palindrome % 10;
            palindromenumber = palindromenumber*10+a;
            palindrome = palindrome/10;
        }
        if(originalnumber == palindromenumber)
        {
            printf("The number is palindrome\n");
        }
        else{
            printf("The number is not a palindrome\n");
        }
        break;

        case 4:
        printf("Exit\n");
        break;
        default:
        printf("Invalid number entered\n");
    }
    return 0;

             
    
}

