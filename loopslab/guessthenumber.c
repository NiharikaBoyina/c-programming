//To guess the number and take input from the user to take input only for five tries.
#include <stdio.h>
int main()
{
    int number = 10;
    for(int i = 5 ; i >= 1 ; i--)
        {
            int n;
            printf("Enter the guessed number from 1 to 20\n");
           scanf("%d",&n);
           if( n < 1 || n > 20)
           {
            printf("Invalid input\n");
            break;
           }
           if(number == n)
           {
            printf("The guessed number is correct\n");
            break;
           }
           else if(number > n)
           {
            printf("The guess number is wrong.\nThe number is greater than the guessed number.\nThere are %d tries left.\n",i);
            printf("\n");
           }
           else
           {
            printf("The guess number is wrong.\nThe number is less than the guessed number.\nThere are %d tries left.\n",i);
            printf("\n");
           }
           

        }
        printf("There are no tries left.\nThe correct number is 10\n");
        return 0;
    }
    