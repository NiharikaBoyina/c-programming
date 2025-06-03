//to print the geonetric progression in reverse mode. 100,50,25,..
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    float l = 100.0;
    for(int i = 1; i <= n;i++)
    {
        printf("%.2f\n",l);
        l = l/2;
    }
    return 0;
}