//WAP to convert given second into its equivalent hour, minute and second
#include <stdio.h>
int main()
{
    float seconds , hour , minutes , seconds2;
    printf("Enter the time in seconds: \n");
    scanf("%f",&seconds);
    hour = ((int)seconds/3600);
    float x = 3600 * hour;
    float y = seconds - x;
    minutes = (int)y/60;
    float z = 60 * minutes;
    seconds2 = y - z;
    printf("The required time is %f hours , %f minutes , %f seconds\n",hour , minutes , seconds2);
    return 0;
}