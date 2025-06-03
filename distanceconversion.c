//WAP to convert a distance in meter entered through keyboard into its equivalent kilometer
#include<stdio.h>
int main()
{
    float metre , kilometre, metres2;
    printf("Enter distance in metres : \n");
    scanf("%f",&metre);
    kilometre = (int)metre/1000;
    metres2 = (int)metre % 1000;
    printf("Distance in kilometres is %f and distance in metres is %f ",kilometre,metres2);
    return 0;
}