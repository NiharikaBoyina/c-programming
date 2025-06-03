// write a program in c to print the series and sum upto n terms.
//1/1^2 - 2/2^2 + 3/3^2 - 4/4^2 + ... +/- n/n^2
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    float sum = 0.0;
    for(int i = 1;i <= n;i++)
    {  
        if(i%2 != 0)
        {
            sum += (float)i/(float)(i*i);
        }
        else{
            sum -= (float)i/(float) (i*i);
        }
         printf("%d/%d",i,i*i);
         if(i != n)
         {

         
         if((i+1) % 2 != 0 )
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
   