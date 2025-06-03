//write a program in c to print a series and its sum upto n terms.
// 1/1! + 2/2! + 3/3! + ... n/n!
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  int fact = 1;
  float sum = 0.0;
  for(int i = 1;i <= n;i++)
  {
     fact *= i;
     sum += (float)i/(float)fact;
     printf("%d/%d!",i,i);
     if(i != n)
     {
        printf(" + ");
     }
  }
  printf(" = %.2f\n",sum);
  return 0;
}