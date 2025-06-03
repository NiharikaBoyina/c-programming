//to print the odd numbers from 0 to 100 using continue statement
#include <stdio.h>
int main()
{
    for(int i = 1; i <= 100;i++)
    {
        if(i%2 == 0)
        {
            continue;
        }
         printf("%d\n",i);
    }
    return 0;
}
