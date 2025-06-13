/* C program to print ASCII values of all characters. */
#include <stdio.h>
int main()
{
        for(int i = 0 ; i <= 255 ; i++)
        {
            printf("%c=%d\n",i,i); // starts from 0 to 255
        }
    return 0;
}