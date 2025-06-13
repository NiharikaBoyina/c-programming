//WAP to take 10 different numbers as input. Print their sum and average.
#include <stdio.h>
int main()
{
    int i;
    printf("Enter the value\n");
    int sum = 0;
    for(int j = 1 ; j <= 10;j++)
    {
        scanf("%d",&i);
        sum += i;
    }
    float avg;
    avg = (float)(sum)/10;
    printf("The value of sum and average is %d and %.2f\n",sum,avg);
    return 0;
}