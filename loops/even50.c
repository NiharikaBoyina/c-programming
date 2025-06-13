//WAP to print even series within 50.
#include <stdio.h>
int main()
{
    for(int i = 1 ; i <= 50 ;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}