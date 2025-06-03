//WAP to find Fahrenheit for a given centigrade temperature.
#include<stdio.h>
int main()
{
    float c,f,temp;
    printf("Enter temperature in centigrade: ");
    scanf("%f",&c);
    f = (c*9/5)+32;
    temp = f;
    printf("The required temperature in farenheit is %f\n",temp);
    return 0;
}