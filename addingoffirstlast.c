//WAP to find the sum of 1st and last of a six-digit number. Number must be a user input.
#include<stdio.h>
int main()
{
    int flagnumber , firstdigit , lastdigit , add;
    flagnumber = 0;
    printf("Enter the six digit number: \n");
    scanf("%d",&flagnumber);
    firstdigit = flagnumber/100000;
    float x = (int)firstdigit * 10000;
    lastdigit = (int)(flagnumber - x) % 10;
    add = firstdigit + lastdigit;
    printf("After adding the two digits , we get : %d \n",add);
    return 0;
}
