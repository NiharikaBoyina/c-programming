//WAP to convert given paisa into its equivalent rupee and paisa as per the following format.
#include <stdio.h>
int main()
{
    float paisa,rupee, x;
    printf("Enter the amount in paisa: \n");
    scanf("%f",&paisa);
    rupee = (int)paisa / 100;
    x = (int)paisa % 100;
    printf("The amount of paisa in rupee and paisa is %f rupee and %f paisa \n",rupee,x);
    return 0;
}