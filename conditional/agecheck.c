// to input ages of three persons and tell who is the youngest.
#include <stdio.h>
int main()
{
    int a , b , c;
    printf("Enter the ages of Ram,Shyam and Ajay\n");
    printf("Enter the age of Ram\n");
    scanf("%d",&a);
    printf("Enter the age of Shyam\n");
    scanf("%d",&b);
    printf("Enter the age of Ajay\n");
    scanf("%d",&c);
    if(a < b && a < c)
    {
        printf("Ram is the youngest\n");
    }
    else if(b < a && b < c)
    {
        printf("Shyam is the youngest\n");
    }
    else
    {
        printf("Ajay is the youngest\n");
    }
    return 0;
}

