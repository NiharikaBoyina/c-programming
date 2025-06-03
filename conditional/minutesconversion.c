//to write a program to convert minutes into days and years.
#include <stdio.h>
int main()
{
    float minutes , days , years;
    printf("Enter the minutes to convert it into days and years\n");
    scanf("%f",&minutes);
    days = minutes/1440.0;
    years = days/365.0;
    printf("The days and years of the entered minutes is %f and %f respectively\n",days,years);
    return 0;




    

}