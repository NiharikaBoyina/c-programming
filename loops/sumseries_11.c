// to write a program in c upto n terms. n to be inputted from the user
//1/1! - 2/2! + 3/3! +.... +/- n/n!
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    float sum = 0.0;
    int fact = 1;
    for(int i = 1; i <= n;i++)
    {
        fact *= i;
        if(i%2 != 0)
        {
            sum += (float)(i)/(float)(fact);
        }
        else
        {
            sum -= (float)(i)/(float)(fact);
        }
        printf("%d/%d!",i,i);
        if(i != n)
        {
            if((i+1)%2 != 0)
            {
                printf(" + ");
            }
            else{
                printf(" - ");
            }
        }

    }
    printf(" = %f\n",sum);
    return 0;
}