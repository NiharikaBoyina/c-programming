//to write a program to check the eligibility to vote
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age of the candidate\n");
    scanf("%d",&age);
    (age >= 18) ? printf("Eligible to vote\n") : printf("Not eligible to vote\n");
    return 0;
}