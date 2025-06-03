/*Print weekday name program according to given weekday number using switch-case
weekday number (0-6) and print weekday name (Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday)*/
#include <stdio.h>
int main()
{
    int daynumber;
    printf("Ehter the daynumber\n");
    scanf(" %d",&daynumber);
    switch(daynumber)
    {
        case 0:
        printf("Weekday name : Sunday\n");
        break;
        case 1:
        printf("Weekday name : Monday\n");
        break;
        case 2:
        printf("Weekday name : Tuesday\n");
        break;
        case 3:
        printf("weekday nmae : Wednesday\n");
        break;
        case 4:
        printf("Weekday name : Thursday\n");
        break;
        case 5:
        printf("Weekday name : Friday\n");
        break;
        case 6:
        printf("Weekday name : saturday\n");
        break;
        default:
        printf("Invalid\n");

    }
    return 0;
}
